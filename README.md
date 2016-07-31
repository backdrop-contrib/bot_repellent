Bot repellent
=============

Add the X-Robots-Tag HTTP header to instruct search index bots on permissible activity.

Based on options listed in the Google Webmasters documentation on [Robots meta tag and X-Robots-Tag HTTP header specifications](https://developers.google.com/webmasters/control-crawl-index/docs/robots_meta_tag?csw=1).

Meta tags insert flags for robots in the website HTML output, however this adds robot tags to the HTTP connection handshake. This is only useful for global rules since that's all I cared to implement.

Supported flags are:

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
