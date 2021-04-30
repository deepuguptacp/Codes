const express = require("express");

const app = express();

app.get("/", (req, res) => {
  res.send("Hello World");
});

app.get("/alien/:id", (req, res) => {
  const id = req.params.id;
  res.send(`Hey A ${id}`);
});

app.listen(9000, () => {
  console.log("Running...");
});
