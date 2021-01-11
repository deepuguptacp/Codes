class Stopwatch {
    constructor() {
        let startTime, endTime, running, duration = 0; // Basic parameters
        this.start = function () {
            if (running)
                throw new Error('Stopwatch has already started.'); // Error produced if stopwatch is already started
            running = true; // Else starting the stopwatch
            startTime = new Date();
        };
        this.stop = function () {
            if (!running) // Error produced if it is not started yet
                throw new Error('Stopwatch is not started.');
            running = false; // Else stopping the watch
            endTime = new Date();

            const seconds = (endTime.getTime() - startTime.getTime()) / 1000; // Calculation of miliseconds
            duration += seconds;
        };
        this.reset = function () {
            startTime = null;
            endTime = null;
            running = false;
            duration = 0;
        };
        Object.defineProperty(this, 'duration', {
            get: function () {
                return duration;
            }
        });
    }
}