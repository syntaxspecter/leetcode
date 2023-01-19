# Leetcode Problems with solutions

<a href = "https://leetcode.com/problemset/all/"> List of Problems

All the solutions are tagged with their respective question number in this repo.
  

## Setting up Leetcode with VScode
There is a great LeetCode extension to VS Code that does most of the heavy lifting for my setup. 
The requirements for the extension are:

- VS Code 1.30.1+
- Node.js 10+

Now comes the tricky part. Run the LeetCode: Sign In command to sign into LeetCode. However, signing in with the user and password doesn’t work.

- Log in with the cookie
- In order to log into your LeetCode account, you’ll need to use the LeetCode Cookie option of the LeetCode: Sign In command. There are a few resources to help figure out what to do here. The steps are:

- Open the browser and navigate to leetcode.com
- Right click on the page and select “Inspect”
- In the developer tools, go to the Network tab and then choose XHR
- Click on any link on the leetcode.com page
- Select any of the http calls in the Network tab
- Find the Cookie attribute in the Request Headers
- Copy the Cookie value (excluding the “Cookie: “ string)
- Run the LeetCode: Sign In command in VS Code
- Select the LeetCode Cookie option
- Enter username and paste the value of the Cookie attribute


## Set up Github

- Create a new repo in Github to store your problem solutions. Now we need to configure the LeetCode extension to save into the git directory.

1. Clone the Github repo locally. I cloned mine to /Users/projects/leetcode.
2. Update your VS Code settings.json file to specify this folder as a workspace. Unfortunately, the LeetCode extension doesn’t allow zero-padding the problem id number so that files would sort correctly. There is an open issue on the problem, but it hasn’t been worked on for over a year.

 ---------------------------------------------------------------- 
  "leetcode.defaultLanguage": "python3",
"leetcode.workspaceFolder": "/Users/ericness/github/leetcode",
"leetcode.filePath": {
    "default": {
        "folder": "",
        "filename": "${id}.${kebab-case-name}.${ext}"
    }
  
 ----------------------------------------------------------------

3. Right-click on any problem in the LeetCode extension explorer and select “Show Problem”.

4. A problem file is created in your Github repo. Edit and commit this file with git like any other code file.

5. Use the LeetCode extension commands to test and submit your solution.
  
Credit : <a href = "https://betterprogramming.pub/work-on-leetcode-problems-in-vs-code-5fedf1a06ca1#:~:text=Run%20the%20LeetCode%3A%20Sign%20In%20command%20in%20VS%20Code,value%20of%20the%20Cookie%20attribute" >Eric Ness

