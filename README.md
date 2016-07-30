Bot repellent
=============

Supplement or alternative to the
[Base Meta Tags](https://backdropcms.org/project/base_meta) module that adds the
X-Robots-Tag HTTP header globally based on options listed in the Google
Webmasters documentation on Robots meta tag and X-Robots-Tag HTTP header
specifications.

Whereas the meta tag module inserts flags for robots in the website HTML output,
this adds robot tags to the HTTP connection handshake. This is only useful
for global rules since that's all I cared to implement. Tags implemented are:

* all
* noindex
* nofollow
* none
* noarchive
* nosnippet
* noodp
* notranslate
* noimageindex


Current Maintainer
------------------

- David Norman (https://github.com/deekayen)

Credits
-----------

- Originally written for Drupal by David Norman
  (https://www.drupal.org/sandbox/deekayen/2315397)
- Ported to Backdrop by David Norman (https://github.com/deekayen)

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
