var priceData = {
  Mango: 70,
  Apple: 75,
  Orange: 40,
  Banana: 34,
  Grape: 50,
};

function drawBar(
  ctx,
  upperLeftCornerX,
  upperLeftCornerY,
  width,
  height,
  color
) {
  ctx.fillStyle = color;
  ctx.fillRect(upperLeftCornerX, upperLeftCornerY, width, height);
}
class Barchart {
  constructor(options) {
    this.options = options;
    this.canvas = options.canvas;
    this.ctx = this.canvas.getContext("2d");
    this.colors = options.colors;

    this.draw = function () {
      var maxValue = 0;
      for (var i in this.options.data) {
        maxValue = Math.max(maxValue, this.options.data[i]);
      }
      var canvasActualHeight = this.canvas.height - this.options.padding * 2;
      var canvasActualWidth = this.canvas.width - this.options.padding * 2;
      var gridValue = 0;
      while (gridValue <= maxValue) {
        var gridY =
          canvasActualHeight * (1 - gridValue / maxValue) +
          this.options.padding;
        this.ctx.fillText(gridValue, 10, gridY);
        this.ctx.restore();

        gridValue += this.options.gridScale + 10;
      }
      var barIndex = 0;
      var numberOfBars = Object.keys(this.options.data).length;
      var barSize = canvasActualWidth / numberOfBars;

      for (i in this.options.data) {
        var val = this.options.data[i];
        var barHeight = Math.round((canvasActualHeight * val) / maxValue);
        drawBar(
          this.ctx,
          this.options.padding + barIndex * barSize + 18,
          this.canvas.height - barHeight - this.options.padding,
          barSize - 5,
          barHeight,
          this.colors[barIndex % this.colors.length]
        );

        barIndex++;
      }
      this.ctx.textBaseline = "bottom";
      this.ctx.textAlign = "center";
      this.ctx.fillStyle = "green";
      this.ctx.font = "bold 14px Arial";
      this.ctx.fillText(
        this.options.seriesName,
        this.canvas.width / 2,
        this.canvas.height + 3.64
      );
    };
  }
}
var myBarchart = new Barchart({
  canvas: myCanvas,
  padding: 10,
  gridScale: 5,
  data: priceData,
  seriesName: "Price of Fruits/KG",
  colors: ["#A55CA5", "#67B6C7", "#BCCD7A", "#EB9743", "#FAFAD2"],
});
myBarchart.draw();
