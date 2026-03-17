const fetchUsers = new Promise((resolve, reject) => {
    const success = true; 
        if (success) {
            const userData = JSON.stringify([
                { name: "Sarah", age: 25, email: "sarah@example.com" },
                { name: "Alex", age: 32, email: "alex@example.com" },
                { name: "Bob", age: 19, email: "bob@example.com" }
            ]);
            resolve(userData);
        } else {
            reject("Error: Unable to fetch user data.");
        }
});
fetchUsers
    .then((jsonString) => {
        
        const users = JSON.parse(jsonString);

        console.log(" User Profiles ");
        users.forEach(user => {
            console.log(`Meet ${user.name}! Age: ${user.age} | Contact: ${user.email}`);
        });
    })
    .catch((error) => {
        
        console.error("Oops!", error);
    });