+-------------+          +--------------+         +-------------+
|  Directors  |          |   Genres     |         |   Actors    |
+-------------+          +--------------+         +-------------+
| id (PK)     |          | id (PK)      |         | id (PK)     |
| name        |          | name         |         | name        |
| birth_date  |          +--------------+         | birth_date  |
+-------------+                                    +-------------+
        |                                                  |
        | 1                                             M:N |
        |                                                  |
        |                                                  |
+-------------+          +-------------------+       +------------------+
|   Movies    |          |   MovieGenres     |       |   MovieActors     |
+-------------+          +-------------------+       +------------------+
| id (PK)     |<---------| movie_id (PK, FK) |        | movie_id (PK, FK)|
| title       |          | genre_id (PK, FK) |------->| actor_id (PK, FK)|
| release_yr  |          +-------------------+        | role             |
| duration    |                                         +------------------+
| description |               
| director_id | (FK)          
+-------------+
        |
        | 1
        |
        v
+-------------+
|  Reviews    |
+-------------+
| id (PK)     |
| movie_id FK |
| reviewer    |
| rating      |
| review_text |
| review_date |
+-------------+
