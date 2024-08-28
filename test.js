function resolveAfter2Seconds() {
    return new Promise((resolve)=> {
        setTimeout(() => {
            resolve("resolved");
        }, 2000);
    });
}
resolveAfter2Seconds().then((msg) => {
    console.log(msg);
    console.log("This later")
});

function asyncCall () {
    resolveAfter2Seconds();
     console.log("This on promise");
}

asyncCall();