/*
Kubernetes is container management  (Orchestration) tool aka K8s


it provides Scalibility and high availability.

Kubernetes is a Greek word.

logo m 7 sticks hai? Project 7 se google connected tha isliye 7 stick diye logo m

(first letter) (jitna alphabet h)(last letter)

Pehle Monolithic Application hote the i.e ek hi server pr sare application chalte hai

Jaise facebook m bhut option hote hai jaise newsfeed, story, Post, Friendlist, Blocklist, Ad etc.. to isko monolithic banane k liye hm sare function ka code ek jagah likhte hai uska war file banakr hm server pr deploye krdete hai or application chala dete the.

pr isme scaling possible nhi hai ki agar hm chahe ki post wala kaam alag se kisi database pr chale to wo possible nhi hai kyuki monotlithic m sb ek jagah chalte the, or agr code m change krne ka kosis kiya tb ye ho sakta tha ki ek code k change hone se dusre m farq padta tha isliye isko solve krne k liye MICROSERVICES create krke solve kiya

MICROSERVICE:- isme sare service alag alga banaye ot alag se data bse provide kiya

humne bade kaamo ko chote parto m divide krdiya

API GATEWAY ka use krte hai microservices ko access krne k liye

sare services ke apne API hote hai API is used for communicatiob between two services.

LOSSELY COUPLED

solution of the above problem is

ek server pr multiple container bana sakte hai different dervice k liye like login , new feed, post

individual services ko conatiner pr run krte haii.


************THEORY*************
-> Kubernetes is an open-source container Management tool which automates container deployement, conatiner scaling and load balancing.

->It schedules, runs and manages isolated conatiners which are running on virtual/Physical/Cloud Machines 

-> All top cloud providers support kubernetes

><><><><><><><><><><><><><><><>  HISTORY <><><><><><><><><>

-> Google developed an internal system called borg (later names as Omega) to deploy and manage thousands google application and services on their cluster

-> in 2014, google introduced Kubernetes an open source platform written in "Golang" and later donated to CNCF(cloud native computing Foundation)

Cloud native :- cloud k feature ka use krke ache feature banaye.

************PROBLEM WITH SCALING UP THE CONATINERS***********

1) conatiners cannot communicate with each other
2) Autoscaling and load balancing was not possible
3)conatiners had to be managed carefully

/*********FEATURES OF KUBERNETES*************
->Orchestration( CLustering of any number of containers running on different network)

->Autoscaling (Vertical and horizontal scaling)
a) vertical scaling :- conatiner k existing capacity ko increase krna
b) horizontal scaling:- number of container ko increase krna

kuberbets naye ec2 instances bhi increase kr sakta hai sath hi sath conatiner bhi

->Auto-Healing

->Load Balacing  :- jo bhi work load ho wo equally distribute hojata hai

->Platform Independent(Cloud/Virtual/Physical) Screenshot

->Fault Tolerance(Node/POD feature) agar oi node fail hogya ya POD fail hogya ya server down hogya to kubernetes naya node/POD create kr deta hai

->Rollback(Going back to previous version)  
suppose hmne code likha or naya version banaya lekin hame aisa feel hua ki puranaa version acha tha to hm purane version pr ja sakte hai

->Health Monitoring of COntainers:- koi container fail hua to naya container create krdeta h

->Batch Execution(One time, Sequential,parallel) kubernetes me kaam JSON,YAML m hote h
sare kaam batch execution m likhte hai or wo backend m hote rhega 

sequential kaam bhi hoga

parrallel kaam bhi ho sakta hai

*****DIFFERENCE IN DOCKER SWARM AND KUBERNETES****
SCRENNSHOT

****ARCHITECTURE OF KUBERNETES******
SCREENSHOT
master-slave or client-server architecture

POD:- Smallest unit of kubernetes

CLuster
Node
POD
Conatiner
Application/Microservice

screenshot




hggdgd
























*/