




<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>mulitFIP/main.c at master · jovizhu/mulitFIP</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <meta property="fb:app_id" content="1401488693436528"/>

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="jovizhu/mulitFIP" name="twitter:title" /><meta content="Contribute to mulitFIP development by creating an account on GitHub." name="twitter:description" /><meta content="https://1.gravatar.com/avatar/70610642d3e42e33010075a045c1d539?d=https%3A%2F%2Fidenticons.github.com%2F2b598d50cc8eedeb598ecbf37d5051f5.png&amp;r=x&amp;s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://1.gravatar.com/avatar/70610642d3e42e33010075a045c1d539?d=https%3A%2F%2Fidenticons.github.com%2F2b598d50cc8eedeb598ecbf37d5051f5.png&amp;r=x&amp;s=400" property="og:image" /><meta content="jovizhu/mulitFIP" property="og:title" /><meta content="https://github.com/jovizhu/mulitFIP" property="og:url" /><meta content="Contribute to mulitFIP development by creating an account on GitHub." property="og:description" />

    <meta name="hostname" content="github-fe122-cp1-prd.iad.github.net">
    <meta name="ruby" content="ruby 2.1.0p0-github-tcmalloc (87c9373a41) [x86_64-linux]">
    <link rel="assets" href="https://github.global.ssl.fastly.net/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035/">
    <link rel="xhr-socket" href="/_sockets" />


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="40869DA1:25C9:1086986:5308BD5F" name="octolytics-dimension-request_id" /><meta content="3340284" name="octolytics-actor-id" /><meta content="jovizhu" name="octolytics-actor-login" /><meta content="ecf3090f2fa6084624ddd466302b6ded881332388bbf062e16adb001bf47c238" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="NODQA3MDWYULBko1cuqf8nX429zaKIh2XY+ynyJ5Bxo=" name="csrf-token" />

    <link href="https://github.global.ssl.fastly.net/assets/github-22cc6aa8138609ccbf0c65025e153af581662ef6.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://github.global.ssl.fastly.net/assets/github2-dd234c178c0a2e0769bab2b5c636ce8f3fc1f02a.css" media="all" rel="stylesheet" type="text/css" />
    
    


      <script crossorigin="anonymous" src="https://github.global.ssl.fastly.net/assets/frameworks-01ab94ef47d6293597922a1fab60e274e1d8f37e.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://github.global.ssl.fastly.net/assets/github-a8a26802e0e7283b39ee4507af78950399f2a5d1.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="df411d3c97b15f5ab1e253f83d14f069">

        <link data-pjax-transient rel='permalink' href='/jovizhu/mulitFIP/blob/fe3ae0f632c8c8c01061ffc2d0610f05e93ed531/main.c'>

  <meta name="description" content="Contribute to mulitFIP development by creating an account on GitHub." />

  <meta content="3340284" name="octolytics-dimension-user_id" /><meta content="jovizhu" name="octolytics-dimension-user_login" /><meta content="15176349" name="octolytics-dimension-repository_id" /><meta content="jovizhu/mulitFIP" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="15176349" name="octolytics-dimension-repository_network_root_id" /><meta content="jovizhu/mulitFIP" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/jovizhu/mulitFIP/commits/master.atom" rel="alternate" title="Recent Commits to mulitFIP:master" type="application/atom+xml" />

  </head>


  <body class="logged_in  env-production linux vis-public page-blob tipsy-tooltips">
    <div class="wrapper">
      
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    
    <a href="/notifications" aria-label="You have no unread notifications" class="notification-indicator tooltipped tooltipped-s" data-gotokey="n">
        <span class="mail-status all-read"></span>
</a>

      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="jovizhu"
      data-repo="jovizhu/mulitFIP"
      data-branch="master"
      data-sha="4ef0b53579175ee40faa47a3652bf9a6a65c8916"
  >

    <input type="hidden" name="nwo" value="jovizhu/mulitFIP" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target" role="button" aria-haspopup="true">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container" aria-hidden="true">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="help tooltipped tooltipped-s" aria-label="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    


  <ul id="user-links">
    <li>
      <a href="/jovizhu" class="name">
        <img alt="wei zhu" class=" js-avatar" data-user="3340284" height="20" src="https://1.gravatar.com/avatar/70610642d3e42e33010075a045c1d539?d=https%3A%2F%2Fidenticons.github.com%2F2b598d50cc8eedeb598ecbf37d5051f5.png&amp;r=x&amp;s=140" width="20" /> jovizhu
      </a>
    </li>

    <li class="new-menu dropdown-toggle js-menu-container">
      <a href="#" class="js-menu-target tooltipped tooltipped-s" aria-label="Create new...">
        <span class="octicon octicon-plus"></span>
        <span class="dropdown-arrow"></span>
      </a>

      <div class="new-menu-content js-menu-content">
      </div>
    </li>

    <li>
      <a href="/settings/profile" id="account_settings"
        class="tooltipped tooltipped-s"
        aria-label="Account settings ">
        <span class="octicon octicon-tools"></span>
      </a>
    </li>
    <li>
      <a class="tooltipped tooltipped-s" href="/logout" data-method="post" id="logout" aria-label="Sign out">
        <span class="octicon octicon-log-out"></span>
      </a>
    </li>

  </ul>

<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>


    <li class="section-title">
      <span title="jovizhu/mulitFIP">This repository</span>
    </li>
      <li>
        <a href="/jovizhu/mulitFIP/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
      </li>
      <li>
        <a href="/jovizhu/mulitFIP/settings/collaboration"><span class="octicon octicon-person-add"></span> New collaborator</a>
      </li>
</ul>

</div>


    
  </div>
</div>

      

        




          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="NODQA3MDWYULBko1cuqf8nX429zaKIh2XY+ynyJ5Bxo=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="15176349" />

    <div class="select-menu js-menu-container js-select-menu">
      <a class="social-count js-social-count" href="/jovizhu/mulitFIP/watchers">
        1
      </a>
      <span class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0" aria-haspopup="true">
        <span class="js-select-button">
          <span class="octicon octicon-eye-unwatch"></span>
          Unwatch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for conversations in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
  

  <div class="js-toggler-container js-social-container starring-container ">
    <a href="/jovizhu/mulitFIP/unstar"
      class="minibutton with-count js-toggler-target star-button starred"
      aria-label="Unstar this repository" data-remote="true" data-method="post" rel="nofollow">
      <span class="octicon octicon-star-delete"></span><span class="text">Unstar</span>
    </a>

    <a href="/jovizhu/mulitFIP/star"
      class="minibutton with-count js-toggler-target star-button unstarred"
      aria-label="Star this repository" data-remote="true" data-method="post" rel="nofollow">
      <span class="octicon octicon-star"></span><span class="text">Star</span>
    </a>

      <a class="social-count js-social-count" href="/jovizhu/mulitFIP/stargazers">
        0
      </a>
  </div>

  </li>


        <li>
          <a href="/jovizhu/mulitFIP/fork" class="minibutton with-count js-toggler-target fork-button lighter tooltipped-n" title="Fork this repo" rel="nofollow" data-method="post">
            <span class="octicon octicon-git-branch-create"></span><span class="text">Fork</span>
          </a>
          <a href="/jovizhu/mulitFIP/network" class="social-count">0</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo"></span>
          <span class="author">
            <a href="/jovizhu" class="url fn" itemprop="url" rel="author"><span itemprop="title">jovizhu</span></a>
          </span>
          <span class="repohead-name-divider">/</span>
          <strong><a href="/jovizhu/mulitFIP" class="js-current-repository js-repo-home-link">mulitFIP</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline js-new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/jovizhu/mulitFIP" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-gotokey="c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /jovizhu/mulitFIP">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped tooltipped-w" aria-label="Issues">
          <a href="/jovizhu/mulitFIP/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="i" data-selected-links="repo_issues /jovizhu/mulitFIP/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/jovizhu/mulitFIP/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="p" data-selected-links="repo_pulls /jovizhu/mulitFIP/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped tooltipped-w" aria-label="Wiki">
          <a href="/jovizhu/mulitFIP/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_wiki /jovizhu/mulitFIP/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/jovizhu/mulitFIP/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /jovizhu/mulitFIP/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/jovizhu/mulitFIP/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /jovizhu/mulitFIP/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Network">
        <a href="/jovizhu/mulitFIP/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /jovizhu/mulitFIP/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


      <div class="sunken-menu-separator"></div>
      <ul class="sunken-menu-group">
        <li class="tooltipped tooltipped-w" aria-label="Settings">
          <a href="/jovizhu/mulitFIP/settings"
            class="sunken-menu-item" data-pjax aria-label="Settings">
            <span class="octicon octicon-tools"></span> <span class="full-word">Settings</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </a>
        </li>
      </ul>
  </div>
</div>

              <div class="only-with-full-nav">
                

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=push">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/jovizhu/mulitFIP.git" readonly="readonly">

    <span aria-label="copy to clipboard" class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/jovizhu/mulitFIP.git" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=push">
  <h3><strong>SSH</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="git@github.com:jovizhu/mulitFIP.git" readonly="readonly">

    <span aria-label="copy to clipboard" class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="git@github.com:jovizhu/mulitFIP.git" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=push">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/jovizhu/mulitFIP" readonly="readonly">

    <span aria-label="copy to clipboard" class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/jovizhu/mulitFIP" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>



                <a href="/jovizhu/mulitFIP/archive/master.zip"
                   class="minibutton sidebar-button"
                   title="Download this repository as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:e062123b0e3d3c9948511f37b9c02cd0 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/jovizhu/mulitFIP/find/master" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/jovizhu/mulitFIP/blob/master/main.c"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <form accept-charset="UTF-8" action="/jovizhu/mulitFIP/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="NODQA3MDWYULBko1cuqf8nX429zaKIh2XY+ynyJ5Bxo=" /></div>
            <span class="octicon octicon-git-branch-create select-menu-item-icon"></span>
            <div class="select-menu-item-text">
              <h4>Create branch: <span class="js-new-item-name"></span></h4>
              <span class="description">from ‘master’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="master" />
            <input type="hidden" name="path" id="path" value="main.c" />
          </form> <!-- /.select-menu-item -->

      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/jovizhu/mulitFIP" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">mulitFIP</span></a></span></span><span class="separator"> / </span><strong class="final-path">main.c</strong> <span aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="main.c" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


  <div class="commit file-history-tease">
    <img alt="wei zhu" class="main-avatar js-avatar" data-user="3340284" height="24" src="https://0.gravatar.com/avatar/70610642d3e42e33010075a045c1d539?d=https%3A%2F%2Fidenticons.github.com%2F2b598d50cc8eedeb598ecbf37d5051f5.png&amp;r=x&amp;s=140" width="24" />
    <span class="author"><a href="/jovizhu" rel="author">jovizhu</a></span>
    <time class="js-relative-date" data-title-format="YYYY-MM-DD HH:mm:ss" datetime="2014-02-17T15:04:46-08:00" title="2014-02-17 15:04:46">February 17, 2014</time>
    <div class="commit-title">
        <a href="/jovizhu/mulitFIP/commit/fe3ae0f632c8c8c01061ffc2d0610f05e93ed531" class="message" data-pjax="true" title="Version 5pm">Version 5pm</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="wei zhu" class=" js-avatar" data-user="3340284" height="24" src="https://0.gravatar.com/avatar/70610642d3e42e33010075a045c1d539?d=https%3A%2F%2Fidenticons.github.com%2F2b598d50cc8eedeb598ecbf37d5051f5.png&amp;r=x&amp;s=140" width="24" />
            <a href="/jovizhu">jovizhu</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
        <span class="meta-divider"></span>
          <span>920 lines (714 sloc)</span>
          <span class="meta-divider"></span>
        <span>23.617 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
                <a class="minibutton js-update-url-with-hash"
                   href="/jovizhu/mulitFIP/edit/master/main.c"
                   data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
          <a href="/jovizhu/mulitFIP/raw/master/main.c" class="button minibutton " id="raw-url">Raw</a>
            <a href="/jovizhu/mulitFIP/blame/master/main.c" class="button minibutton js-update-url-with-hash">Blame</a>
          <a href="/jovizhu/mulitFIP/commits/master/main.c" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
          <a class="minibutton danger empty-icon tooltipped tooltipped-s"
             href="/jovizhu/mulitFIP/delete/master/main.c"
             aria-label=""
             data-method="post" data-test-id="delete-blob-file" rel="nofollow">
          Delete
        </a>
      </div><!-- /.actions -->
    </div>
        <div class="blob-wrapper data type-c js-blob-data">
        <table class="file-code file-diff tab-size-8">
          <tr class="file-code-line">
            <td class="blob-line-nums">
              <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>
<span id="L712" rel="#L712">712</span>
<span id="L713" rel="#L713">713</span>
<span id="L714" rel="#L714">714</span>
<span id="L715" rel="#L715">715</span>
<span id="L716" rel="#L716">716</span>
<span id="L717" rel="#L717">717</span>
<span id="L718" rel="#L718">718</span>
<span id="L719" rel="#L719">719</span>
<span id="L720" rel="#L720">720</span>
<span id="L721" rel="#L721">721</span>
<span id="L722" rel="#L722">722</span>
<span id="L723" rel="#L723">723</span>
<span id="L724" rel="#L724">724</span>
<span id="L725" rel="#L725">725</span>
<span id="L726" rel="#L726">726</span>
<span id="L727" rel="#L727">727</span>
<span id="L728" rel="#L728">728</span>
<span id="L729" rel="#L729">729</span>
<span id="L730" rel="#L730">730</span>
<span id="L731" rel="#L731">731</span>
<span id="L732" rel="#L732">732</span>
<span id="L733" rel="#L733">733</span>
<span id="L734" rel="#L734">734</span>
<span id="L735" rel="#L735">735</span>
<span id="L736" rel="#L736">736</span>
<span id="L737" rel="#L737">737</span>
<span id="L738" rel="#L738">738</span>
<span id="L739" rel="#L739">739</span>
<span id="L740" rel="#L740">740</span>
<span id="L741" rel="#L741">741</span>
<span id="L742" rel="#L742">742</span>
<span id="L743" rel="#L743">743</span>
<span id="L744" rel="#L744">744</span>
<span id="L745" rel="#L745">745</span>
<span id="L746" rel="#L746">746</span>
<span id="L747" rel="#L747">747</span>
<span id="L748" rel="#L748">748</span>
<span id="L749" rel="#L749">749</span>
<span id="L750" rel="#L750">750</span>
<span id="L751" rel="#L751">751</span>
<span id="L752" rel="#L752">752</span>
<span id="L753" rel="#L753">753</span>
<span id="L754" rel="#L754">754</span>
<span id="L755" rel="#L755">755</span>
<span id="L756" rel="#L756">756</span>
<span id="L757" rel="#L757">757</span>
<span id="L758" rel="#L758">758</span>
<span id="L759" rel="#L759">759</span>
<span id="L760" rel="#L760">760</span>
<span id="L761" rel="#L761">761</span>
<span id="L762" rel="#L762">762</span>
<span id="L763" rel="#L763">763</span>
<span id="L764" rel="#L764">764</span>
<span id="L765" rel="#L765">765</span>
<span id="L766" rel="#L766">766</span>
<span id="L767" rel="#L767">767</span>
<span id="L768" rel="#L768">768</span>
<span id="L769" rel="#L769">769</span>
<span id="L770" rel="#L770">770</span>
<span id="L771" rel="#L771">771</span>
<span id="L772" rel="#L772">772</span>
<span id="L773" rel="#L773">773</span>
<span id="L774" rel="#L774">774</span>
<span id="L775" rel="#L775">775</span>
<span id="L776" rel="#L776">776</span>
<span id="L777" rel="#L777">777</span>
<span id="L778" rel="#L778">778</span>
<span id="L779" rel="#L779">779</span>
<span id="L780" rel="#L780">780</span>
<span id="L781" rel="#L781">781</span>
<span id="L782" rel="#L782">782</span>
<span id="L783" rel="#L783">783</span>
<span id="L784" rel="#L784">784</span>
<span id="L785" rel="#L785">785</span>
<span id="L786" rel="#L786">786</span>
<span id="L787" rel="#L787">787</span>
<span id="L788" rel="#L788">788</span>
<span id="L789" rel="#L789">789</span>
<span id="L790" rel="#L790">790</span>
<span id="L791" rel="#L791">791</span>
<span id="L792" rel="#L792">792</span>
<span id="L793" rel="#L793">793</span>
<span id="L794" rel="#L794">794</span>
<span id="L795" rel="#L795">795</span>
<span id="L796" rel="#L796">796</span>
<span id="L797" rel="#L797">797</span>
<span id="L798" rel="#L798">798</span>
<span id="L799" rel="#L799">799</span>
<span id="L800" rel="#L800">800</span>
<span id="L801" rel="#L801">801</span>
<span id="L802" rel="#L802">802</span>
<span id="L803" rel="#L803">803</span>
<span id="L804" rel="#L804">804</span>
<span id="L805" rel="#L805">805</span>
<span id="L806" rel="#L806">806</span>
<span id="L807" rel="#L807">807</span>
<span id="L808" rel="#L808">808</span>
<span id="L809" rel="#L809">809</span>
<span id="L810" rel="#L810">810</span>
<span id="L811" rel="#L811">811</span>
<span id="L812" rel="#L812">812</span>
<span id="L813" rel="#L813">813</span>
<span id="L814" rel="#L814">814</span>
<span id="L815" rel="#L815">815</span>
<span id="L816" rel="#L816">816</span>
<span id="L817" rel="#L817">817</span>
<span id="L818" rel="#L818">818</span>
<span id="L819" rel="#L819">819</span>
<span id="L820" rel="#L820">820</span>
<span id="L821" rel="#L821">821</span>
<span id="L822" rel="#L822">822</span>
<span id="L823" rel="#L823">823</span>
<span id="L824" rel="#L824">824</span>
<span id="L825" rel="#L825">825</span>
<span id="L826" rel="#L826">826</span>
<span id="L827" rel="#L827">827</span>
<span id="L828" rel="#L828">828</span>
<span id="L829" rel="#L829">829</span>
<span id="L830" rel="#L830">830</span>
<span id="L831" rel="#L831">831</span>
<span id="L832" rel="#L832">832</span>
<span id="L833" rel="#L833">833</span>
<span id="L834" rel="#L834">834</span>
<span id="L835" rel="#L835">835</span>
<span id="L836" rel="#L836">836</span>
<span id="L837" rel="#L837">837</span>
<span id="L838" rel="#L838">838</span>
<span id="L839" rel="#L839">839</span>
<span id="L840" rel="#L840">840</span>
<span id="L841" rel="#L841">841</span>
<span id="L842" rel="#L842">842</span>
<span id="L843" rel="#L843">843</span>
<span id="L844" rel="#L844">844</span>
<span id="L845" rel="#L845">845</span>
<span id="L846" rel="#L846">846</span>
<span id="L847" rel="#L847">847</span>
<span id="L848" rel="#L848">848</span>
<span id="L849" rel="#L849">849</span>
<span id="L850" rel="#L850">850</span>
<span id="L851" rel="#L851">851</span>
<span id="L852" rel="#L852">852</span>
<span id="L853" rel="#L853">853</span>
<span id="L854" rel="#L854">854</span>
<span id="L855" rel="#L855">855</span>
<span id="L856" rel="#L856">856</span>
<span id="L857" rel="#L857">857</span>
<span id="L858" rel="#L858">858</span>
<span id="L859" rel="#L859">859</span>
<span id="L860" rel="#L860">860</span>
<span id="L861" rel="#L861">861</span>
<span id="L862" rel="#L862">862</span>
<span id="L863" rel="#L863">863</span>
<span id="L864" rel="#L864">864</span>
<span id="L865" rel="#L865">865</span>
<span id="L866" rel="#L866">866</span>
<span id="L867" rel="#L867">867</span>
<span id="L868" rel="#L868">868</span>
<span id="L869" rel="#L869">869</span>
<span id="L870" rel="#L870">870</span>
<span id="L871" rel="#L871">871</span>
<span id="L872" rel="#L872">872</span>
<span id="L873" rel="#L873">873</span>
<span id="L874" rel="#L874">874</span>
<span id="L875" rel="#L875">875</span>
<span id="L876" rel="#L876">876</span>
<span id="L877" rel="#L877">877</span>
<span id="L878" rel="#L878">878</span>
<span id="L879" rel="#L879">879</span>
<span id="L880" rel="#L880">880</span>
<span id="L881" rel="#L881">881</span>
<span id="L882" rel="#L882">882</span>
<span id="L883" rel="#L883">883</span>
<span id="L884" rel="#L884">884</span>
<span id="L885" rel="#L885">885</span>
<span id="L886" rel="#L886">886</span>
<span id="L887" rel="#L887">887</span>
<span id="L888" rel="#L888">888</span>
<span id="L889" rel="#L889">889</span>
<span id="L890" rel="#L890">890</span>
<span id="L891" rel="#L891">891</span>
<span id="L892" rel="#L892">892</span>
<span id="L893" rel="#L893">893</span>
<span id="L894" rel="#L894">894</span>
<span id="L895" rel="#L895">895</span>
<span id="L896" rel="#L896">896</span>
<span id="L897" rel="#L897">897</span>
<span id="L898" rel="#L898">898</span>
<span id="L899" rel="#L899">899</span>
<span id="L900" rel="#L900">900</span>
<span id="L901" rel="#L901">901</span>
<span id="L902" rel="#L902">902</span>
<span id="L903" rel="#L903">903</span>
<span id="L904" rel="#L904">904</span>
<span id="L905" rel="#L905">905</span>
<span id="L906" rel="#L906">906</span>
<span id="L907" rel="#L907">907</span>
<span id="L908" rel="#L908">908</span>
<span id="L909" rel="#L909">909</span>
<span id="L910" rel="#L910">910</span>
<span id="L911" rel="#L911">911</span>
<span id="L912" rel="#L912">912</span>
<span id="L913" rel="#L913">913</span>
<span id="L914" rel="#L914">914</span>
<span id="L915" rel="#L915">915</span>
<span id="L916" rel="#L916">916</span>
<span id="L917" rel="#L917">917</span>
<span id="L918" rel="#L918">918</span>
<span id="L919" rel="#L919">919</span>

            </td>
            <td class="blob-line-code"><div class="code-body highlight"><pre><div class='line' id='LC1'><span class="cm">/*********************************************************************</span></div><div class='line' id='LC2'><span class="cm">* (C) Copyright 2001 Albert Ludwigs University Freiburg</span></div><div class='line' id='LC3'><span class="cm">*     Institute of Computer Science</span></div><div class='line' id='LC4'><span class="cm">*</span></div><div class='line' id='LC5'><span class="cm">* This program is free software; you can redistribute it and/or</span></div><div class='line' id='LC6'><span class="cm">* modify it under the terms of the GNU General Public License</span></div><div class='line' id='LC7'><span class="cm">* as published by the Free Software Foundation; either version 2</span></div><div class='line' id='LC8'><span class="cm">* of the License, or (at your option) any later version.</span></div><div class='line' id='LC9'><span class="cm">* </span></div><div class='line' id='LC10'><span class="cm">* This program is distributed in the hope that it will be useful,</span></div><div class='line' id='LC11'><span class="cm">* but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC12'><span class="cm">* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC13'><span class="cm">* GNU General Public License for more details.</span></div><div class='line' id='LC14'><span class="cm">* </span></div><div class='line' id='LC15'><span class="cm">* You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC16'><span class="cm">* along with this program; if not, write to the Free Software</span></div><div class='line' id='LC17'><span class="cm">* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.</span></div><div class='line' id='LC18'><span class="cm">* </span></div><div class='line' id='LC19'><span class="cm">*********************************************************************/</span></div><div class='line' id='LC20'><br/></div><div class='line' id='LC21'><span class="cm">/*</span></div><div class='line' id='LC22'><span class="cm">* THIS SOURCE CODE IS SUPPLIED  ``AS IS&#39;&#39; WITHOUT WARRANTY OF ANY KIND, </span></div><div class='line' id='LC23'><span class="cm">* AND ITS AUTHOR AND THE JOURNAL OF ARTIFICIAL INTELLIGENCE RESEARCH </span></div><div class='line' id='LC24'><span class="cm">* (JAIR) AND JAIR&#39;S PUBLISHERS AND DISTRIBUTORS, DISCLAIM ANY AND ALL </span></div><div class='line' id='LC25'><span class="cm">* WARRANTIES, INCLUDING BUT NOT LIMITED TO ANY IMPLIED</span></div><div class='line' id='LC26'><span class="cm">* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, AND</span></div><div class='line' id='LC27'><span class="cm">* ANY WARRANTIES OR NON INFRINGEMENT.  THE USER ASSUMES ALL LIABILITY AND</span></div><div class='line' id='LC28'><span class="cm">* RESPONSIBILITY FOR USE OF THIS SOURCE CODE, AND NEITHER THE AUTHOR NOR</span></div><div class='line' id='LC29'><span class="cm">* JAIR, NOR JAIR&#39;S PUBLISHERS AND DISTRIBUTORS, WILL BE LIABLE FOR </span></div><div class='line' id='LC30'><span class="cm">* DAMAGES OF ANY KIND RESULTING FROM ITS USE.  Without limiting the </span></div><div class='line' id='LC31'><span class="cm">* generality of the foregoing, neither the author, nor JAIR, nor JAIR&#39;s</span></div><div class='line' id='LC32'><span class="cm">* publishers and distributors, warrant that the Source Code will be </span></div><div class='line' id='LC33'><span class="cm">* error-free, will operate without interruption, or will meet the needs </span></div><div class='line' id='LC34'><span class="cm">* of the user.</span></div><div class='line' id='LC35'><span class="cm">*/</span></div><div class='line' id='LC36'><br/></div><div class='line' id='LC37'><span class="cm">/*********************************************************************</span></div><div class='line' id='LC38'><span class="cm">* File: main.c</span></div><div class='line' id='LC39'><span class="cm">* Description: The main routine for the FastForward Planner.</span></div><div class='line' id='LC40'><span class="cm">*</span></div><div class='line' id='LC41'><span class="cm">* Author: Joerg Hoffmann 2000</span></div><div class='line' id='LC42'><span class="cm">* </span></div><div class='line' id='LC43'><span class="cm">* Modified: jovi zhu 2013</span></div><div class='line' id='LC44'><span class="cm">*********************************************************************/</span> </div><div class='line' id='LC45'><br/></div><div class='line' id='LC46'><span class="cp">#include &quot;ff.h&quot;</span></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'><span class="cp">#include &quot;memory.h&quot;</span></div><div class='line' id='LC49'><span class="cp">#include &quot;output.h&quot;</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'><span class="cp">#include &quot;parse.h&quot;</span></div><div class='line' id='LC52'><br/></div><div class='line' id='LC53'><span class="cp">#include &quot;inst_pre.h&quot;</span></div><div class='line' id='LC54'><span class="cp">#include &quot;inst_easy.h&quot;</span></div><div class='line' id='LC55'><span class="cp">#include &quot;inst_hard.h&quot;</span></div><div class='line' id='LC56'><span class="cp">#include &quot;inst_final.h&quot;</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'><span class="cp">#include &quot;orderings.h&quot;</span></div><div class='line' id='LC59'><br/></div><div class='line' id='LC60'><span class="cp">#include &quot;relax.h&quot;</span></div><div class='line' id='LC61'><span class="cp">#include &quot;search.h&quot;</span></div><div class='line' id='LC62'><br/></div><div class='line' id='LC63'><span class="cp">#include &quot;fip.h&quot;</span></div><div class='line' id='LC64'><br/></div><div class='line' id='LC65'><br/></div><div class='line' id='LC66'><span class="cm">/*</span></div><div class='line' id='LC67'><span class="cm">*  ----------------------------- GLOBAL VARIABLES ----------------------------</span></div><div class='line' id='LC68'><span class="cm">*/</span></div><div class='line' id='LC69'><br/></div><div class='line' id='LC70'><span class="cm">/*******************</span></div><div class='line' id='LC71'><span class="cm">* GENERAL HELPERS *</span></div><div class='line' id='LC72'><span class="cm">*******************/</span></div><div class='line' id='LC73'><br/></div><div class='line' id='LC74'><br/></div><div class='line' id='LC75'><span class="cm">/* used to time the different stages of the planner</span></div><div class='line' id='LC76'><span class="cm">*/</span></div><div class='line' id='LC77'><span class="kt">double</span> <span class="n">gtempl_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">greach_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">grelev_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">gconn_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC78'><span class="kt">double</span> <span class="n">gsearch_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'><span class="cm">/* the command line inputs</span></div><div class='line' id='LC82'><span class="cm">*/</span></div><div class='line' id='LC83'><span class="k">struct</span> <span class="n">_command_line</span> <span class="n">gcmd_line</span><span class="p">;</span></div><div class='line' id='LC84'><br/></div><div class='line' id='LC85'><span class="cm">/* number of states that got heuristically evaluated</span></div><div class='line' id='LC86'><span class="cm">*/</span></div><div class='line' id='LC87'><span class="kt">int</span> <span class="n">gevaluated_states</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'><span class="cm">/* maximal depth of breadth first search</span></div><div class='line' id='LC90'><span class="cm">*/</span></div><div class='line' id='LC91'><span class="kt">int</span> <span class="n">gmax_search_depth</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'><br/></div><div class='line' id='LC94'><span class="cm">/***********</span></div><div class='line' id='LC95'><span class="cm">* PARSING *</span></div><div class='line' id='LC96'><span class="cm">***********/</span></div><div class='line' id='LC97'><br/></div><div class='line' id='LC98'><span class="cm">/* used for pddl parsing, flex only allows global variables</span></div><div class='line' id='LC99'><span class="cm"> */</span></div><div class='line' id='LC100'><span class="kt">int</span> <span class="n">gbracket_count</span><span class="p">;</span></div><div class='line' id='LC101'><span class="kt">char</span> <span class="o">*</span><span class="n">gproblem_name</span><span class="p">;</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'><span class="cm">/* problem name in additional goals </span></div><div class='line' id='LC104'><span class="cm"> */</span></div><div class='line' id='LC105'><span class="kt">char</span> <span class="o">*</span><span class="n">gmul_problem_name</span><span class="p">;</span></div><div class='line' id='LC106'><br/></div><div class='line' id='LC107'><span class="cm">/* The current input line number</span></div><div class='line' id='LC108'><span class="cm"> */</span></div><div class='line' id='LC109'><span class="kt">int</span> <span class="n">lineno</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC110'><br/></div><div class='line' id='LC111'><span class="cm">/* The current input filename</span></div><div class='line' id='LC112'><span class="cm"> */</span></div><div class='line' id='LC113'><span class="kt">char</span> <span class="o">*</span><span class="n">gact_filename</span><span class="p">;</span></div><div class='line' id='LC114'><br/></div><div class='line' id='LC115'><span class="cm">/* The pddl domain name</span></div><div class='line' id='LC116'><span class="cm"> */</span></div><div class='line' id='LC117'><span class="kt">char</span> <span class="o">*</span><span class="n">gdomain_name</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC118'><br/></div><div class='line' id='LC119'><span class="cm">/* The pddl domain name for additional goals</span></div><div class='line' id='LC120'><span class="cm"> */</span></div><div class='line' id='LC121'><span class="kt">char</span> <span class="o">*</span><span class="n">gmul_domain_name</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC122'><br/></div><div class='line' id='LC123'><span class="cm">/* loaded, uninstantiated operators</span></div><div class='line' id='LC124'><span class="cm"> */</span></div><div class='line' id='LC125'><span class="n">PlOperator</span> <span class="o">*</span><span class="n">gloaded_ops</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC126'><br/></div><div class='line' id='LC127'><span class="cm">/* loaded, uninstantiated additional operators</span></div><div class='line' id='LC128'><span class="cm"> */</span></div><div class='line' id='LC129'><span class="n">PlOperator</span> <span class="o">*</span><span class="n">gadd_loaded_ops</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'><span class="cm">/* stores initials as fact_list </span></div><div class='line' id='LC132'><span class="cm"> */</span></div><div class='line' id='LC133'><span class="n">PlNode</span> <span class="o">*</span><span class="n">gorig_initial_facts</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC134'><br/></div><div class='line' id='LC135'><span class="cm">/* not yet preprocessed  for additional goal facts</span></div><div class='line' id='LC136'><span class="cm"> */</span></div><div class='line' id='LC137'><span class="n">PlNode</span> <span class="o">*</span><span class="n">gadd_orig_goal_facts</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC138'><br/></div><div class='line' id='LC139'><span class="cm">/* not yet preprocessed goal facts</span></div><div class='line' id='LC140'><span class="cm"> */</span></div><div class='line' id='LC141'><span class="n">PlNode</span> <span class="o">*</span><span class="n">gorig_goal_facts</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC142'><br/></div><div class='line' id='LC143'><span class="cm">/* axioms as in UCPOP before being changed to ops</span></div><div class='line' id='LC144'><span class="cm"> */</span></div><div class='line' id='LC145'><span class="n">PlOperator</span> <span class="o">*</span><span class="n">gloaded_axioms</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC146'><br/></div><div class='line' id='LC147'><span class="cm">/* the types, as defined in the domain file</span></div><div class='line' id='LC148'><span class="cm"> */</span></div><div class='line' id='LC149'><span class="n">TypedList</span> <span class="o">*</span><span class="n">gparse_types</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC150'><br/></div><div class='line' id='LC151'><span class="cm">/* the constants, as defined in domain file</span></div><div class='line' id='LC152'><span class="cm"> */</span></div><div class='line' id='LC153'><span class="n">TypedList</span> <span class="o">*</span><span class="n">gparse_constants</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC154'><br/></div><div class='line' id='LC155'><span class="cm">/* the predicates and their arg types, as defined in the domain file</span></div><div class='line' id='LC156'><span class="cm"> */</span></div><div class='line' id='LC157'><span class="n">TypedListList</span> <span class="o">*</span><span class="n">gparse_predicates</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC158'><br/></div><div class='line' id='LC159'><span class="cm">/* the objects, declared in the problem file</span></div><div class='line' id='LC160'><span class="cm"> */</span></div><div class='line' id='LC161'><span class="n">TypedList</span> <span class="o">*</span><span class="n">gparse_objects</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC162'><br/></div><div class='line' id='LC163'><br/></div><div class='line' id='LC164'><span class="cm">/* connection to instantiation ( except ops, goal, initial )</span></div><div class='line' id='LC165'><span class="cm"> */</span></div><div class='line' id='LC166'><br/></div><div class='line' id='LC167'><span class="cm">/* all typed objects </span></div><div class='line' id='LC168'><span class="cm"> */</span></div><div class='line' id='LC169'><span class="n">FactList</span> <span class="o">*</span><span class="n">gorig_constant_list</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC170'><br/></div><div class='line' id='LC171'><span class="cm">/* the predicates and their types</span></div><div class='line' id='LC172'><span class="cm"> */</span></div><div class='line' id='LC173'><span class="n">FactList</span> <span class="o">*</span><span class="n">gpredicates_and_types</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC174'><br/></div><div class='line' id='LC175'><br/></div><div class='line' id='LC176'><span class="cm">/*****************</span></div><div class='line' id='LC177'><span class="cm"> * INSTANTIATING *</span></div><div class='line' id='LC178'><span class="cm"> *****************/</span></div><div class='line' id='LC179'><br/></div><div class='line' id='LC180'><span class="cm">/* global arrays of constant names,</span></div><div class='line' id='LC181'><span class="cm"> *               type names (with their constants),</span></div><div class='line' id='LC182'><span class="cm"> *               predicate names,</span></div><div class='line' id='LC183'><span class="cm"> *               predicate aritys,</span></div><div class='line' id='LC184'><span class="cm"> *               defined types of predicate args</span></div><div class='line' id='LC185'><span class="cm"> */</span></div><div class='line' id='LC186'><span class="n">Token</span> <span class="n">gconstants</span><span class="p">[</span><span class="n">MAX_CONSTANTS</span><span class="p">];</span></div><div class='line' id='LC187'><span class="kt">int</span> <span class="n">gnum_constants</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC188'><span class="n">Token</span> <span class="n">gtype_names</span><span class="p">[</span><span class="n">MAX_TYPES</span><span class="p">];</span></div><div class='line' id='LC189'><span class="kt">int</span> <span class="n">gtype_consts</span><span class="p">[</span><span class="n">MAX_TYPES</span><span class="p">][</span><span class="n">MAX_TYPE</span><span class="p">];</span></div><div class='line' id='LC190'><span class="n">Bool</span> <span class="n">gis_member</span><span class="p">[</span><span class="n">MAX_CONSTANTS</span><span class="p">][</span><span class="n">MAX_TYPES</span><span class="p">];</span></div><div class='line' id='LC191'><span class="kt">int</span> <span class="n">gmember_nr</span><span class="p">[</span><span class="n">MAX_CONSTANTS</span><span class="p">][</span><span class="n">MAX_TYPES</span><span class="p">];</span><span class="cm">/* nr of object within a type */</span></div><div class='line' id='LC192'><span class="kt">int</span> <span class="n">gtype_size</span><span class="p">[</span><span class="n">MAX_TYPES</span><span class="p">];</span></div><div class='line' id='LC193'><span class="kt">int</span> <span class="n">gnum_types</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC194'><span class="n">Token</span> <span class="n">gpredicates</span><span class="p">[</span><span class="n">MAX_PREDICATES</span><span class="p">];</span></div><div class='line' id='LC195'><span class="kt">int</span> <span class="n">garity</span><span class="p">[</span><span class="n">MAX_PREDICATES</span><span class="p">];</span></div><div class='line' id='LC196'><span class="kt">int</span> <span class="n">gpredicates_args_type</span><span class="p">[</span><span class="n">MAX_PREDICATES</span><span class="p">][</span><span class="n">MAX_ARITY</span><span class="p">];</span></div><div class='line' id='LC197'><span class="kt">int</span> <span class="n">gnum_predicates</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC198'><br/></div><div class='line' id='LC199'><span class="cm">/* the domain in integer (Fact) representation */</span></div><div class='line' id='LC200'><span class="n">Operator_pointer</span> <span class="n">goperators</span><span class="p">[</span><span class="n">MAX_OPERATORS</span><span class="p">];</span></div><div class='line' id='LC201'><span class="kt">int</span> <span class="n">gnum_operators</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC202'><span class="n">Fact</span> <span class="o">*</span><span class="n">gfull_initial</span><span class="p">;</span></div><div class='line' id='LC203'><span class="kt">int</span> <span class="n">gnum_full_initial</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC204'><span class="n">WffNode</span> <span class="o">*</span><span class="n">ggoal</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC205'><span class="cm">/* jovi: defined for multiple purposes */</span></div><div class='line' id='LC206'><span class="n">Operator_pointer</span> <span class="n">gadd_operators</span><span class="p">[</span><span class="n">MAX_OPERATORS</span><span class="p">];</span></div><div class='line' id='LC207'><span class="kt">int</span> <span class="n">gadd_num_operators</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC208'><span class="n">WffNode</span> <span class="o">*</span><span class="n">gadd_goal</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC209'><span class="cm">/* stores inertia - information: is any occurence of the predicate</span></div><div class='line' id='LC210'><span class="cm"> * added / deleted in the uninstantiated ops ? */</span></div><div class='line' id='LC211'><span class="n">Bool</span> <span class="n">gis_added</span><span class="p">[</span><span class="n">MAX_PREDICATES</span><span class="p">];</span></div><div class='line' id='LC212'><span class="n">Bool</span> <span class="n">gis_deleted</span><span class="p">[</span><span class="n">MAX_PREDICATES</span><span class="p">];</span></div><div class='line' id='LC213'><br/></div><div class='line' id='LC214'><span class="cm">/* splitted initial state:</span></div><div class='line' id='LC215'><span class="cm"> * initial non static facts,</span></div><div class='line' id='LC216'><span class="cm"> * initial static facts, divided into predicates</span></div><div class='line' id='LC217'><span class="cm"> * (will be two dimensional array, allocated directly before need)</span></div><div class='line' id='LC218'><span class="cm"> */</span></div><div class='line' id='LC219'><span class="n">Facts</span> <span class="o">*</span><span class="n">ginitial</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC220'><span class="kt">int</span> <span class="n">gnum_initial</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC221'><span class="n">Fact</span> <span class="o">**</span><span class="n">ginitial_predicate</span><span class="p">;</span></div><div class='line' id='LC222'><span class="kt">int</span> <span class="o">*</span><span class="n">gnum_initial_predicate</span><span class="p">;</span></div><div class='line' id='LC223'><br/></div><div class='line' id='LC224'><span class="cm">/* the type numbers corresponding to any unary inertia</span></div><div class='line' id='LC225'><span class="cm"> */</span></div><div class='line' id='LC226'><span class="kt">int</span> <span class="n">gtype_to_predicate</span><span class="p">[</span><span class="n">MAX_PREDICATES</span><span class="p">];</span></div><div class='line' id='LC227'><span class="kt">int</span> <span class="n">gpredicate_to_type</span><span class="p">[</span><span class="n">MAX_TYPES</span><span class="p">];</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'><span class="cm">/* (ordered) numbers of types that new type is intersection of</span></div><div class='line' id='LC230'><span class="cm">*/</span></div><div class='line' id='LC231'><span class="n">TypeArray</span> <span class="n">gintersected_types</span><span class="p">[</span><span class="n">MAX_TYPES</span><span class="p">];</span></div><div class='line' id='LC232'><span class="kt">int</span> <span class="n">gnum_intersected_types</span><span class="p">[</span><span class="n">MAX_TYPES</span><span class="p">];</span></div><div class='line' id='LC233'><br/></div><div class='line' id='LC234'><span class="cm">/* splitted domain: hard n easy ops */</span></div><div class='line' id='LC235'><span class="n">Operator_pointer</span> <span class="o">*</span><span class="n">ghard_operators</span><span class="p">;</span></div><div class='line' id='LC236'><span class="kt">int</span> <span class="n">gnum_hard_operators</span><span class="p">;</span></div><div class='line' id='LC237'><span class="n">NormOperator_pointer</span> <span class="o">*</span><span class="n">geasy_operators</span><span class="p">;</span></div><div class='line' id='LC238'><span class="kt">int</span> <span class="n">gnum_easy_operators</span><span class="p">;</span></div><div class='line' id='LC239'><br/></div><div class='line' id='LC240'><span class="cm">/* so called Templates for easy ops: possible inertia constrained</span></div><div class='line' id='LC241'><span class="cm">* instantiation constants */</span></div><div class='line' id='LC242'><span class="n">EasyTemplate</span> <span class="o">*</span><span class="n">geasy_templates</span><span class="p">;</span></div><div class='line' id='LC243'><span class="kt">int</span> <span class="n">gnum_easy_templates</span><span class="p">;</span></div><div class='line' id='LC244'><br/></div><div class='line' id='LC245'><span class="cm">/* first step for hard ops: create mixed operators, with conjunctive</span></div><div class='line' id='LC246'><span class="cm">* precondition and arbitrary effects */</span></div><div class='line' id='LC247'><span class="n">MixedOperator</span> <span class="o">*</span><span class="n">ghard_mixed_operators</span><span class="p">;</span></div><div class='line' id='LC248'><span class="kt">int</span> <span class="n">gnum_hard_mixed_operators</span><span class="p">;</span></div><div class='line' id='LC249'><br/></div><div class='line' id='LC250'><span class="cm">/* hard &#39;&#39;templates&#39;&#39; : pseudo actions */</span></div><div class='line' id='LC251'><span class="n">PseudoAction_pointer</span> <span class="o">*</span><span class="n">ghard_templates</span><span class="p">;</span></div><div class='line' id='LC252'><span class="kt">int</span> <span class="n">gnum_hard_templates</span><span class="p">;</span></div><div class='line' id='LC253'><br/></div><div class='line' id='LC254'><span class="cm">/*************************** mutlipl purpose support ******************************************************************/</span></div><div class='line' id='LC255'><span class="cm">/* splitted additional domain: hard n easy ops */</span></div><div class='line' id='LC256'><span class="n">Operator_pointer</span> <span class="o">*</span><span class="n">gadd_hard_operators</span><span class="p">;</span></div><div class='line' id='LC257'><span class="kt">int</span> <span class="n">gadd_num_hard_operators</span><span class="p">;</span></div><div class='line' id='LC258'><span class="n">NormOperator_pointer</span> <span class="o">*</span><span class="n">gadd_easy_operators</span><span class="p">;</span></div><div class='line' id='LC259'><span class="kt">int</span> <span class="n">gadd_num_easy_operators</span><span class="p">;</span></div><div class='line' id='LC260'><br/></div><div class='line' id='LC261'><span class="cm">/* so called Templates for easy ops: possible inertia constrained</span></div><div class='line' id='LC262'><span class="cm">* instantiation constants */</span></div><div class='line' id='LC263'><span class="n">EasyTemplate</span> <span class="o">*</span><span class="n">gadd_easy_templates</span><span class="p">;</span></div><div class='line' id='LC264'><span class="kt">int</span> <span class="n">gadd_num_easy_templates</span><span class="p">;</span></div><div class='line' id='LC265'><br/></div><div class='line' id='LC266'><span class="cm">/* first step for hard ops: create mixed operators, with conjunctive</span></div><div class='line' id='LC267'><span class="cm">* precondition and arbitrary effects */</span></div><div class='line' id='LC268'><span class="n">MixedOperator</span> <span class="o">*</span><span class="n">gadd_hard_mixed_operators</span><span class="p">;</span></div><div class='line' id='LC269'><span class="kt">int</span> <span class="n">gadd_num_hard_mixed_operators</span><span class="p">;</span></div><div class='line' id='LC270'><br/></div><div class='line' id='LC271'><span class="cm">/* hard &#39;&#39;templates&#39;&#39; : pseudo actions */</span></div><div class='line' id='LC272'><span class="n">PseudoAction_pointer</span> <span class="o">*</span><span class="n">gadd_hard_templates</span><span class="p">;</span></div><div class='line' id='LC273'><span class="kt">int</span> <span class="n">gadd_num_hard_templates</span><span class="p">;</span></div><div class='line' id='LC274'><span class="cm">/************************************** multiple purpose (end) **********************************************************/</span></div><div class='line' id='LC275'><br/></div><div class='line' id='LC276'><br/></div><div class='line' id='LC277'><span class="cm">/* store the final &quot;relevant facts&quot; */</span></div><div class='line' id='LC278'><span class="n">Fact</span> <span class="n">grelevant_facts</span><span class="p">[</span><span class="n">MAX_RELEVANT_FACTS</span><span class="p">];</span></div><div class='line' id='LC279'><span class="kt">int</span> <span class="n">gnum_relevant_facts</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC280'><span class="kt">int</span> <span class="n">gnum_pp_facts</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC281'><br/></div><div class='line' id='LC282'><span class="cm">/* the final actions and problem representation */</span></div><div class='line' id='LC283'><span class="n">Action</span> <span class="o">*</span><span class="n">gactions</span><span class="p">;</span></div><div class='line' id='LC284'><span class="kt">int</span> <span class="n">gnum_actions</span><span class="p">;</span></div><div class='line' id='LC285'><span class="n">State</span> <span class="n">ginitial_state</span><span class="p">;</span></div><div class='line' id='LC286'><span class="n">State</span> <span class="n">ggoal_state</span><span class="p">;</span></div><div class='line' id='LC287'><br/></div><div class='line' id='LC288'><span class="cm">/*added by JC*/</span></div><div class='line' id='LC289'><span class="n">StateActionPair</span> <span class="o">*</span><span class="n">gini_pair</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC290'><br/></div><div class='line' id='LC291'><span class="cm">/* tree shape plan</span></div><div class='line' id='LC292'><span class="cm">*/</span></div><div class='line' id='LC293'><span class="n">PlanNode</span> <span class="n">gfipPlan</span><span class="p">;</span></div><div class='line' id='LC294'><span class="kt">int</span> <span class="n">gnum_fip_plan_node</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC295'><br/></div><div class='line' id='LC296'><span class="n">StateActionPair</span> <span class="o">*</span><span class="n">gsolved_states</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC297'><span class="kt">int</span> <span class="n">gnum_solved_states</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC298'><br/></div><div class='line' id='LC299'><span class="n">StateActionPair</span> <span class="o">*</span><span class="n">gunsovled_states</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC300'><span class="kt">int</span> <span class="n">gnum_unsolved_states</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC301'><br/></div><div class='line' id='LC302'><span class="n">Bool</span> <span class="n">g_is_strong</span> <span class="o">=</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC303'><br/></div><div class='line' id='LC304'><span class="n">Bool</span> <span class="n">to_print_state</span> <span class="o">=</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC305'><br/></div><div class='line' id='LC306'><span class="n">StateActionPair</span> <span class="o">*</span><span class="n">gTail</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC307'><br/></div><div class='line' id='LC308'><span class="cm">/*</span></div><div class='line' id='LC309'><span class="cm">*JC: invalid actions</span></div><div class='line' id='LC310'><span class="cm">*/</span></div><div class='line' id='LC311'><span class="n">StateActionPair</span> <span class="o">*</span><span class="n">gInvActs</span><span class="p">;</span></div><div class='line' id='LC312'><span class="kt">int</span> <span class="n">gnum_IV</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC313'><br/></div><div class='line' id='LC314'><span class="cm">/**********************</span></div><div class='line' id='LC315'><span class="cm">* CONNECTIVITY GRAPH *</span></div><div class='line' id='LC316'><span class="cm">**********************/</span></div><div class='line' id='LC317'><br/></div><div class='line' id='LC318'><span class="cm">/* one ops (actions) array ...</span></div><div class='line' id='LC319'><span class="cm">*/</span></div><div class='line' id='LC320'><span class="n">OpConn</span> <span class="o">*</span><span class="n">gop_conn</span><span class="p">;</span></div><div class='line' id='LC321'><span class="kt">int</span> <span class="n">gnum_op_conn</span><span class="p">;</span></div><div class='line' id='LC322'><br/></div><div class='line' id='LC323'><span class="cm">/* one effects array ...</span></div><div class='line' id='LC324'><span class="cm">*/</span></div><div class='line' id='LC325'><span class="n">EfConn</span> <span class="o">*</span><span class="n">gef_conn</span><span class="p">;</span></div><div class='line' id='LC326'><span class="kt">int</span> <span class="n">gnum_ef_conn</span><span class="p">;</span></div><div class='line' id='LC327'><br/></div><div class='line' id='LC328'><span class="cm">/* one facts array.</span></div><div class='line' id='LC329'><span class="cm">*/</span></div><div class='line' id='LC330'><span class="n">FtConn</span> <span class="o">*</span><span class="n">gft_conn</span><span class="p">;</span></div><div class='line' id='LC331'><span class="kt">int</span> <span class="n">gnum_ft_conn</span><span class="p">;</span></div><div class='line' id='LC332'><br/></div><div class='line' id='LC333'><span class="cm">/*******************</span></div><div class='line' id='LC334'><span class="cm">* SEARCHING NEEDS *</span></div><div class='line' id='LC335'><span class="cm">*******************/</span></div><div class='line' id='LC336'><br/></div><div class='line' id='LC337'><span class="cm">/* the goal state, divided into subsets</span></div><div class='line' id='LC338'><span class="cm">*/</span></div><div class='line' id='LC339'><span class="n">State</span> <span class="o">*</span><span class="n">ggoal_agenda</span><span class="p">;</span></div><div class='line' id='LC340'><span class="kt">int</span> <span class="n">gnum_goal_agenda</span><span class="p">;</span></div><div class='line' id='LC341'><br/></div><div class='line' id='LC342'><span class="cm">/* byproduct of fixpoint: applicable actions</span></div><div class='line' id='LC343'><span class="cm">*/</span></div><div class='line' id='LC344'><span class="kt">int</span> <span class="o">*</span><span class="n">gA</span><span class="p">;</span></div><div class='line' id='LC345'><span class="kt">int</span> <span class="n">gnum_A</span><span class="p">;</span></div><div class='line' id='LC346'><br/></div><div class='line' id='LC347'><span class="cm">/* communication from extract 1.P. to search engines:</span></div><div class='line' id='LC348'><span class="cm">* 1P action choice</span></div><div class='line' id='LC349'><span class="cm">*/</span></div><div class='line' id='LC350'><span class="kt">int</span> <span class="o">*</span><span class="n">gH</span><span class="p">;</span></div><div class='line' id='LC351'><span class="kt">int</span> <span class="n">gnum_H</span><span class="p">;</span></div><div class='line' id='LC352'><br/></div><div class='line' id='LC353'><span class="cm">/* the effects that are considered true in relaxed plan</span></div><div class='line' id='LC354'><span class="cm">*/</span></div><div class='line' id='LC355'><span class="kt">int</span> <span class="o">*</span><span class="n">gin_plan_E</span><span class="p">;</span></div><div class='line' id='LC356'><span class="kt">int</span> <span class="n">gnum_in_plan_E</span><span class="p">;</span></div><div class='line' id='LC357'><br/></div><div class='line' id='LC358'><span class="cm">/* always stores (current) serial plan</span></div><div class='line' id='LC359'><span class="cm">*/</span></div><div class='line' id='LC360'><span class="kt">int</span> <span class="n">gplan_ops</span><span class="p">[</span><span class="n">MAX_PLAN_LENGTH</span><span class="p">];</span></div><div class='line' id='LC361'><span class="kt">int</span> <span class="n">gnum_plan_ops</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC362'><br/></div><div class='line' id='LC363'><span class="cm">/* stores the states that the current plan goes through</span></div><div class='line' id='LC364'><span class="cm">* ( for knowing where new agenda entry starts from )</span></div><div class='line' id='LC365'><span class="cm">*/</span></div><div class='line' id='LC366'><span class="n">State</span> <span class="n">gplan_states</span><span class="p">[</span><span class="n">MAX_PLAN_LENGTH</span> <span class="o">+</span> <span class="mi">1</span><span class="p">];</span></div><div class='line' id='LC367'><br/></div><div class='line' id='LC368'><span class="cm">/*</span></div><div class='line' id='LC369'><span class="cm">*  ----------------------------- HEADERS FOR PARSING ----------------------------</span></div><div class='line' id='LC370'><span class="cm">* ( fns defined in the scan-* files )</span></div><div class='line' id='LC371'><span class="cm">*/</span></div><div class='line' id='LC372'><span class="kt">void</span> <span class="nf">get_fct_file_name</span><span class="p">(</span> <span class="kt">char</span> <span class="o">*</span><span class="n">filename</span> <span class="p">);</span></div><div class='line' id='LC373'><span class="kt">void</span> <span class="nf">load_ops_file</span><span class="p">(</span> <span class="kt">char</span> <span class="o">*</span><span class="n">filename</span> <span class="p">);</span></div><div class='line' id='LC374'><span class="kt">void</span> <span class="nf">load_fct_file</span><span class="p">(</span> <span class="kt">char</span> <span class="o">*</span><span class="n">filename</span> <span class="p">);</span></div><div class='line' id='LC375'><span class="kt">void</span> <span class="nf">load_mul_file</span><span class="p">(</span> <span class="kt">char</span> <span class="o">*</span><span class="n">filename</span> <span class="p">);</span></div><div class='line' id='LC376'><br/></div><div class='line' id='LC377'><span class="cm">/*</span></div><div class='line' id='LC378'><span class="cm">*  ----------------------------- MAIN ROUTINE ----------------------------</span></div><div class='line' id='LC379'><span class="cm">*/</span></div><div class='line' id='LC380'><span class="k">struct</span> <span class="n">timeb</span> <span class="n">lstart</span><span class="p">,</span> <span class="n">lend</span><span class="p">;</span></div><div class='line' id='LC381'><span class="k">struct</span> <span class="n">timeb</span> <span class="n">mystart</span><span class="p">,</span> <span class="n">myend</span><span class="p">;</span></div><div class='line' id='LC382'><br/></div><div class='line' id='LC383'><span class="kt">int</span> <span class="nf">main</span><span class="p">(</span> <span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">argv</span><span class="p">[]</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC384'>	<span class="cm">/* resulting name for ops file</span></div><div class='line' id='LC385'><span class="cm">	*/</span></div><div class='line' id='LC386'>	<span class="kt">char</span> <span class="n">ops_file</span><span class="p">[</span><span class="n">MAX_LENGTH</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;&quot;</span><span class="p">;</span></div><div class='line' id='LC387'><br/></div><div class='line' id='LC388'>	<span class="cm">/* same for fct file </span></div><div class='line' id='LC389'><span class="cm">	*/</span></div><div class='line' id='LC390'>	<span class="kt">char</span> <span class="n">fct_file</span><span class="p">[</span><span class="n">MAX_LENGTH</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;&quot;</span><span class="p">;</span></div><div class='line' id='LC391'><br/></div><div class='line' id='LC392'>	<span class="cm">/* name for additional goal file</span></div><div class='line' id='LC393'><span class="cm">	*/</span></div><div class='line' id='LC394'>	<span class="kt">char</span> <span class="n">mul_file</span><span class="p">[</span><span class="n">MAX_LENGTH</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;&quot;</span><span class="p">;</span></div><div class='line' id='LC395'><br/></div><div class='line' id='LC396'>	<span class="k">struct</span> <span class="n">timeb</span> <span class="n">start</span><span class="p">,</span> <span class="n">end</span><span class="p">;</span></div><div class='line' id='LC397'><br/></div><div class='line' id='LC398'>	<span class="n">State</span> <span class="n">current_start</span><span class="p">,</span> <span class="n">current_end</span><span class="p">;</span></div><div class='line' id='LC399'>	<span class="kt">int</span> <span class="n">i</span><span class="p">,</span> <span class="n">j</span><span class="p">;</span></div><div class='line' id='LC400'>	<span class="n">Bool</span> <span class="n">found_plan</span><span class="p">;</span></div><div class='line' id='LC401'><br/></div><div class='line' id='LC402'>&nbsp;&nbsp;	<span class="cm">/*times ( &amp;lstart );*/</span></div><div class='line' id='LC403'>	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">lstart</span><span class="p">);</span></div><div class='line' id='LC404'><br/></div><div class='line' id='LC405'>	<span class="cm">/* command line treatment*/</span></div><div class='line' id='LC406'>	<span class="k">if</span> <span class="p">(</span> <span class="n">argc</span> <span class="o">==</span> <span class="mi">1</span> <span class="o">||</span> <span class="p">(</span> <span class="n">argc</span> <span class="o">==</span> <span class="mi">2</span> <span class="o">&amp;&amp;</span> <span class="o">*++</span><span class="n">argv</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">==</span> <span class="sc">&#39;?&#39;</span> <span class="p">)</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC407'>		<span class="n">ff_usage</span><span class="p">();</span></div><div class='line' id='LC408'>		<span class="n">exit</span><span class="p">(</span> <span class="mi">1</span> <span class="p">);</span></div><div class='line' id='LC409'>	<span class="p">}</span></div><div class='line' id='LC410'>	<span class="k">if</span> <span class="p">(</span> <span class="o">!</span><span class="n">process_command_line</span><span class="p">(</span> <span class="n">argc</span><span class="p">,</span> <span class="n">argv</span> <span class="p">)</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC411'>		<span class="n">ff_usage</span><span class="p">();</span></div><div class='line' id='LC412'>		<span class="n">exit</span><span class="p">(</span> <span class="mi">1</span> <span class="p">);</span></div><div class='line' id='LC413'>	<span class="p">}</span></div><div class='line' id='LC414'><br/></div><div class='line' id='LC415'>	<span class="cm">/* make file names</span></div><div class='line' id='LC416'><span class="cm">	*/</span></div><div class='line' id='LC417'><br/></div><div class='line' id='LC418'>	<span class="cm">/* one input name missing</span></div><div class='line' id='LC419'><span class="cm">	*/</span></div><div class='line' id='LC420'>	<span class="k">if</span> <span class="p">(</span> <span class="o">!</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">ops_file_name</span> <span class="o">||</span> </div><div class='line' id='LC421'>		<span class="o">!</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">fct_file_name</span> <span class="o">||</span></div><div class='line' id='LC422'>		<span class="o">!</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">mul_file_name</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC423'><br/></div><div class='line' id='LC424'>			<span class="n">fprintf</span><span class="p">(</span><span class="n">stdout</span><span class="p">,</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">ff: three input files needed</span><span class="se">\n\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC425'>			<span class="n">ff_usage</span><span class="p">();</span>      </div><div class='line' id='LC426'>			<span class="n">exit</span><span class="p">(</span> <span class="mi">1</span> <span class="p">);</span></div><div class='line' id='LC427'>	<span class="p">}</span></div><div class='line' id='LC428'>	<span class="cm">/* add path info, complete file names will be stored in</span></div><div class='line' id='LC429'><span class="cm">	* ops_file and fct_file </span></div><div class='line' id='LC430'><span class="cm">	*/</span></div><div class='line' id='LC431'>	<span class="n">sprintf</span><span class="p">(</span><span class="n">ops_file</span><span class="p">,</span> <span class="s">&quot;%s%s&quot;</span><span class="p">,</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">path</span><span class="p">,</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">ops_file_name</span><span class="p">);</span></div><div class='line' id='LC432'>	<span class="n">sprintf</span><span class="p">(</span><span class="n">fct_file</span><span class="p">,</span> <span class="s">&quot;%s%s&quot;</span><span class="p">,</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">path</span><span class="p">,</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">fct_file_name</span><span class="p">);</span></div><div class='line' id='LC433'>	<span class="n">sprintf</span><span class="p">(</span><span class="n">mul_file</span><span class="p">,</span> <span class="s">&quot;%s%s&quot;</span><span class="p">,</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">path</span><span class="p">,</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">mul_file_name</span><span class="p">);</span></div><div class='line' id='LC434'><br/></div><div class='line' id='LC435'>	<span class="cm">/* parse the input files</span></div><div class='line' id='LC436'><span class="cm">	*/</span></div><div class='line' id='LC437'>&nbsp;&nbsp;	<span class="cm">/* start parse &amp; instantiation timing*/</span></div><div class='line' id='LC438'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;start );*/</span></div><div class='line' id='LC439'>	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">start</span><span class="p">);</span></div><div class='line' id='LC440'>&nbsp;&nbsp;	<span class="cm">/* domain file (ops)</span></div><div class='line' id='LC441'><span class="cm">   	*/</span></div><div class='line' id='LC442'>&nbsp;&nbsp;	<span class="k">if</span> <span class="p">(</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">display_info</span> <span class="o">&gt;=</span> <span class="mi">1</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC443'>&nbsp;&nbsp;&nbsp;&nbsp;		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">ff: parsing domain file&quot;</span><span class="p">);</span></div><div class='line' id='LC444'>&nbsp;&nbsp;	<span class="p">}</span> </div><div class='line' id='LC445'>&nbsp;&nbsp;	<span class="cm">/* it is important for the pddl language to define the domain before </span></div><div class='line' id='LC446'><span class="cm">   	* reading the problem </span></div><div class='line' id='LC447'><span class="cm">   	*/</span></div><div class='line' id='LC448'>&nbsp;&nbsp;	<span class="n">load_ops_file</span><span class="p">(</span> <span class="n">ops_file</span> <span class="p">);</span></div><div class='line' id='LC449'>&nbsp;&nbsp;	<span class="cm">/* problem file (facts)</span></div><div class='line' id='LC450'><span class="cm">   	*/</span>  </div><div class='line' id='LC451'>&nbsp;&nbsp;	<span class="k">if</span> <span class="p">(</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">display_info</span> <span class="o">&gt;=</span> <span class="mi">1</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC452'>&nbsp;&nbsp;&nbsp;&nbsp;		<span class="n">printf</span><span class="p">(</span><span class="s">&quot; ... done.</span><span class="se">\n</span><span class="s">ff: parsing problem file.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span> </div><div class='line' id='LC453'>&nbsp;&nbsp;	<span class="p">}</span></div><div class='line' id='LC454'><br/></div><div class='line' id='LC455'>&nbsp;&nbsp;	<span class="n">load_fct_file</span><span class="p">(</span> <span class="n">fct_file</span> <span class="p">);</span></div><div class='line' id='LC456'><br/></div><div class='line' id='LC457'>&nbsp;&nbsp;	<span class="k">if</span> <span class="p">(</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">display_info</span> <span class="o">&gt;=</span> <span class="mi">1</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC458'>&nbsp;&nbsp;&nbsp;&nbsp;		<span class="n">printf</span><span class="p">(</span><span class="s">&quot; ... done.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC459'>&nbsp;&nbsp;	<span class="p">}</span></div><div class='line' id='LC460'><br/></div><div class='line' id='LC461'>	<span class="n">load_mul_file</span><span class="p">(</span> <span class="n">mul_file</span> <span class="p">);</span></div><div class='line' id='LC462'><br/></div><div class='line' id='LC463'>	<span class="k">if</span> <span class="p">(</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">display_info</span> <span class="o">&gt;=</span> <span class="mi">1</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC464'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;... done.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC465'>	<span class="p">}</span></div><div class='line' id='LC466'><br/></div><div class='line' id='LC467'>	<span class="cm">/* This is needed to get all types.</span></div><div class='line' id='LC468'><span class="cm">	*/</span></div><div class='line' id='LC469'>	<span class="cm">/* modified by jovi: adding supprot for addtional constant */</span></div><div class='line' id='LC470'>	<span class="n">build_orig_constant_list</span><span class="p">();</span></div><div class='line' id='LC471'><br/></div><div class='line' id='LC472'>	<span class="cm">/* last step of parsing: see if it&#39;s an ADL domain!</span></div><div class='line' id='LC473'><span class="cm">	*/</span></div><div class='line' id='LC474'>	<span class="k">if</span> <span class="p">(</span> <span class="o">!</span><span class="n">make_adl_domain</span><span class="p">()</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC475'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">ff: this is not an ADL problem!&quot;</span><span class="p">);</span></div><div class='line' id='LC476'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">    can&#39;t be handled by this version.</span><span class="se">\n\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC477'>		<span class="n">exit</span><span class="p">(</span> <span class="mi">1</span> <span class="p">);</span></div><div class='line' id='LC478'>	<span class="p">}</span></div><div class='line' id='LC479'><br/></div><div class='line' id='LC480'><br/></div><div class='line' id='LC481'>	<span class="cm">/* now instantiate operators;</span></div><div class='line' id='LC482'><span class="cm">	*/</span></div><div class='line' id='LC483'>	<span class="cm">/*JC: initialize the array*/</span></div><div class='line' id='LC484'>&nbsp;	<span class="n">gInvActs</span> <span class="o">=</span> <span class="p">(</span><span class="n">StateActionPair</span><span class="o">*</span><span class="p">)</span><span class="n">calloc</span><span class="p">(</span><span class="n">MAX_INVALID_ACTIONS</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">StateActionPair</span><span class="p">));</span></div><div class='line' id='LC485'><br/></div><div class='line' id='LC486'>	<span class="cm">/**************************</span></div><div class='line' id='LC487'><span class="cm">	* first do PREPROCESSING * </span></div><div class='line' id='LC488'><span class="cm">	**************************/</span></div><div class='line' id='LC489'><br/></div><div class='line' id='LC490'>	<span class="cm">/* start by collecting all strings and thereby encoding </span></div><div class='line' id='LC491'><span class="cm">	* the domain in integers.</span></div><div class='line' id='LC492'><span class="cm">	*/</span></div><div class='line' id='LC493'>	<span class="n">encode_domain_in_integers</span><span class="p">();</span></div><div class='line' id='LC494'><br/></div><div class='line' id='LC495'>	<span class="cm">/* inertia preprocessing, first step:</span></div><div class='line' id='LC496'><span class="cm">	*   - collect inertia information</span></div><div class='line' id='LC497'><span class="cm">	*   - split initial state into</span></div><div class='line' id='LC498'><span class="cm">	*        _ arrays for individual predicates</span></div><div class='line' id='LC499'><span class="cm">	*        - arrays for all static relations</span></div><div class='line' id='LC500'><span class="cm">	*        - array containing non - static relations</span></div><div class='line' id='LC501'><span class="cm">	*/</span></div><div class='line' id='LC502'>	<span class="n">do_inertia_preprocessing_step_1</span><span class="p">();</span></div><div class='line' id='LC503'><br/></div><div class='line' id='LC504'>	<span class="cm">/* normalize all PL1 formulae in domain description:</span></div><div class='line' id='LC505'><span class="cm">	* (goal, preconds and effect conditions)</span></div><div class='line' id='LC506'><span class="cm">	*   - simplify formula</span></div><div class='line' id='LC507'><span class="cm">	*   - expand quantifiers</span></div><div class='line' id='LC508'><span class="cm">	*   - NOTs down</span></div><div class='line' id='LC509'><span class="cm">	*/</span></div><div class='line' id='LC510'>	<span class="n">normalize_all_wffs</span><span class="p">();</span></div><div class='line' id='LC511'><br/></div><div class='line' id='LC512'>	<span class="cm">/* translate negative preconds: introduce symmetric new predicate</span></div><div class='line' id='LC513'><span class="cm">	* NOT-p(..) (e.g., not-in(?ob) in briefcaseworld)</span></div><div class='line' id='LC514'><span class="cm">	*/</span></div><div class='line' id='LC515'>	<span class="n">translate_negative_preconds</span><span class="p">();</span></div><div class='line' id='LC516'><br/></div><div class='line' id='LC517'>	<span class="cm">/* split domain in easy (disjunction of conjunctive preconds)</span></div><div class='line' id='LC518'><span class="cm">	* and hard (non DNF preconds) part, to apply </span></div><div class='line' id='LC519'><span class="cm">	* different instantiation algorithms</span></div><div class='line' id='LC520'><span class="cm">	*/</span></div><div class='line' id='LC521'>	<span class="n">split_domain</span><span class="p">();</span></div><div class='line' id='LC522'><br/></div><div class='line' id='LC523'><br/></div><div class='line' id='LC524'>	<span class="cm">/***********************************************</span></div><div class='line' id='LC525'><span class="cm">	* PREPROCESSING FINISHED                      *</span></div><div class='line' id='LC526'><span class="cm">	*                                             *</span></div><div class='line' id='LC527'><span class="cm">	* NOW MULTIPLY PARAMETERS IN EFFECTIVE MANNER *</span></div><div class='line' id='LC528'><span class="cm">	***********************************************/</span></div><div class='line' id='LC529'><br/></div><div class='line' id='LC530'>	<span class="n">build_easy_action_templates</span><span class="p">();</span></div><div class='line' id='LC531'>	<span class="n">build_hard_action_templates</span><span class="p">();</span></div><div class='line' id='LC532'><br/></div><div class='line' id='LC533'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;end );*/</span></div><div class='line' id='LC534'>	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">end</span><span class="p">);</span></div><div class='line' id='LC535'>&nbsp;&nbsp;	<span class="n">TIME</span><span class="p">(</span> <span class="n">gtempl_time</span> <span class="p">);</span></div><div class='line' id='LC536'><br/></div><div class='line' id='LC537'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;start );*/</span></div><div class='line' id='LC538'>&nbsp;&nbsp;	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">start</span><span class="p">);</span></div><div class='line' id='LC539'><br/></div><div class='line' id='LC540'>&nbsp;&nbsp;	<span class="cm">/* perform reachability analysis in terms of relaxed  fixpoint */</span></div><div class='line' id='LC541'>&nbsp;&nbsp;	<span class="n">perform_reachability_analysis</span><span class="p">();</span></div><div class='line' id='LC542'><br/></div><div class='line' id='LC543'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;end );*/</span></div><div class='line' id='LC544'>&nbsp;&nbsp;	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">end</span><span class="p">);</span></div><div class='line' id='LC545'>&nbsp;&nbsp;	<span class="n">TIME</span><span class="p">(</span> <span class="n">greach_time</span> <span class="p">);</span></div><div class='line' id='LC546'><br/></div><div class='line' id='LC547'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;start );*/</span></div><div class='line' id='LC548'>&nbsp;&nbsp;	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">start</span><span class="p">);</span></div><div class='line' id='LC549'><br/></div><div class='line' id='LC550'>	<span class="cm">/* collect the relevant facts and build final domain</span></div><div class='line' id='LC551'><span class="cm">	* and problem representations.*/</span></div><div class='line' id='LC552'>	<span class="n">collect_relevant_facts</span><span class="p">();</span></div><div class='line' id='LC553'><br/></div><div class='line' id='LC554'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;end );*/</span></div><div class='line' id='LC555'>	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">end</span><span class="p">);</span></div><div class='line' id='LC556'>&nbsp;&nbsp;	<span class="n">TIME</span><span class="p">(</span> <span class="n">grelev_time</span> <span class="p">);</span></div><div class='line' id='LC557'><br/></div><div class='line' id='LC558'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;start );*/</span></div><div class='line' id='LC559'>&nbsp;&nbsp;	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">start</span><span class="p">);</span></div><div class='line' id='LC560'><br/></div><div class='line' id='LC561'>	<span class="cm">/* now build globally accessable connectivity graph</span></div><div class='line' id='LC562'><span class="cm">	*/</span></div><div class='line' id='LC563'>	<span class="n">build_connectivity_graph</span><span class="p">();</span></div><div class='line' id='LC564'><br/></div><div class='line' id='LC565'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;end );*/</span></div><div class='line' id='LC566'>	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">end</span><span class="p">);</span></div><div class='line' id='LC567'>&nbsp;&nbsp;	<span class="n">TIME</span><span class="p">(</span> <span class="n">gconn_time</span> <span class="p">);</span></div><div class='line' id='LC568'>&nbsp;&nbsp;</div><div class='line' id='LC569'><br/></div><div class='line' id='LC570'>	<span class="cm">/***********************************************************</span></div><div class='line' id='LC571'><span class="cm">	* we are finally through with preprocessing and can worry *</span></div><div class='line' id='LC572'><span class="cm">	* bout finding a plan instead.                            *</span></div><div class='line' id='LC573'><span class="cm">	***********************************************************/</span></div><div class='line' id='LC574'>	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">mystart</span><span class="p">);</span></div><div class='line' id='LC575'>&nbsp;&nbsp;	<span class="cm">/*times( &amp;start );*/</span></div><div class='line' id='LC576'>	<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">start</span><span class="p">);</span></div><div class='line' id='LC577'><br/></div><div class='line' id='LC578'>&nbsp;&nbsp;	<span class="cm">/* another quick preprocess: approximate goal orderings and split</span></div><div class='line' id='LC579'><span class="cm">   	 * goal set into sequence of smaller sets, the goal agenda</span></div><div class='line' id='LC580'><span class="cm">   	 */</span></div><div class='line' id='LC581'>&nbsp;&nbsp;	<span class="n">compute_goal_agenda</span><span class="p">();</span></div><div class='line' id='LC582'><br/></div><div class='line' id='LC583'>&nbsp;&nbsp;	<span class="cm">/*debugit(&amp;ginitial_state);*/</span></div><div class='line' id='LC584'><br/></div><div class='line' id='LC585'>	<span class="cm">/* make space in plan states info, and relax</span></div><div class='line' id='LC586'><span class="cm">	 * make sapce is initialize the space for gplan_states and</span></div><div class='line' id='LC587'><span class="cm">	 * initialzie the variable</span></div><div class='line' id='LC588'><span class="cm">	*/</span></div><div class='line' id='LC589'>	<span class="k">for</span> <span class="p">(</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">MAX_PLAN_LENGTH</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC590'>		<span class="n">make_state</span><span class="p">(</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">gplan_states</span><span class="p">[</span><span class="n">i</span><span class="p">]),</span> <span class="n">gnum_ft_conn</span> <span class="p">);</span></div><div class='line' id='LC591'>		<span class="n">gplan_states</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">max_F</span> <span class="o">=</span> <span class="n">gnum_ft_conn</span><span class="p">;</span></div><div class='line' id='LC592'>	<span class="p">}</span></div><div class='line' id='LC593'><br/></div><div class='line' id='LC594'>	<span class="n">make_state</span><span class="p">(</span> <span class="o">&amp;</span><span class="n">current_start</span><span class="p">,</span> <span class="n">gnum_ft_conn</span> <span class="p">);</span></div><div class='line' id='LC595'>	<span class="n">current_start</span><span class="p">.</span><span class="n">max_F</span> <span class="o">=</span> <span class="n">gnum_ft_conn</span><span class="p">;</span></div><div class='line' id='LC596'>	<span class="n">make_state</span><span class="p">(</span> <span class="o">&amp;</span><span class="n">current_end</span><span class="p">,</span> <span class="n">gnum_ft_conn</span> <span class="p">);</span></div><div class='line' id='LC597'>	<span class="n">current_end</span><span class="p">.</span><span class="n">max_F</span> <span class="o">=</span> <span class="n">gnum_ft_conn</span><span class="p">;</span></div><div class='line' id='LC598'>	<span class="n">initialize_relax</span><span class="p">();</span></div><div class='line' id='LC599'><br/></div><div class='line' id='LC600'>	<span class="cm">/* need to read the agenda paper */</span></div><div class='line' id='LC601'>	<span class="n">source_to_dest</span><span class="p">(</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">gplan_states</span><span class="p">[</span><span class="mi">0</span><span class="p">]),</span> <span class="o">&amp;</span><span class="n">ginitial_state</span> <span class="p">);</span></div><div class='line' id='LC602'><br/></div><div class='line' id='LC603'>	<span class="n">source_to_dest</span><span class="p">(</span> <span class="o">&amp;</span><span class="n">current_start</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ginitial_state</span> <span class="p">);</span></div><div class='line' id='LC604'>	<span class="n">source_to_dest</span><span class="p">(</span> <span class="o">&amp;</span><span class="n">current_end</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">ggoal_agenda</span><span class="p">[</span><span class="mi">0</span><span class="p">])</span> <span class="p">);</span></div><div class='line' id='LC605'><br/></div><div class='line' id='LC606'>	<span class="k">for</span> <span class="p">(</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">gnum_goal_agenda</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC607'>		<span class="cm">/* JC add a hashtable creating in do_enforced_hill_climbling*/</span></div><div class='line' id='LC608'>		<span class="k">if</span> <span class="p">(</span> <span class="o">!</span><span class="n">do_enforced_hill_climbing</span><span class="p">(</span> <span class="o">&amp;</span><span class="n">current_start</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">current_end</span> <span class="p">)</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC609'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC610'>		<span class="p">}</span></div><div class='line' id='LC611'>		<span class="n">source_to_dest</span><span class="p">(</span> <span class="o">&amp;</span><span class="n">current_start</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">gplan_states</span><span class="p">[</span><span class="n">gnum_plan_ops</span><span class="p">])</span> <span class="p">);</span></div><div class='line' id='LC612'>		<span class="k">if</span> <span class="p">(</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">gnum_goal_agenda</span> <span class="o">-</span> <span class="mi">1</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC613'>			<span class="k">for</span> <span class="p">(</span> <span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">ggoal_agenda</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">].</span><span class="n">num_F</span><span class="p">;</span> <span class="n">j</span><span class="o">++</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC614'>				<span class="n">current_end</span><span class="p">.</span><span class="n">F</span><span class="p">[</span><span class="n">current_end</span><span class="p">.</span><span class="n">num_F</span><span class="o">++</span><span class="p">]</span> <span class="o">=</span> <span class="n">ggoal_agenda</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">].</span><span class="n">F</span><span class="p">[</span><span class="n">j</span><span class="p">];</span></div><div class='line' id='LC615'>			<span class="p">}</span></div><div class='line' id='LC616'>		<span class="p">}</span></div><div class='line' id='LC617'>	<span class="p">}</span></div><div class='line' id='LC618'><br/></div><div class='line' id='LC619'>	<span class="n">found_plan</span> <span class="o">=</span> <span class="p">(</span> <span class="n">i</span> <span class="o">==</span> <span class="n">gnum_goal_agenda</span> <span class="p">)</span> <span class="o">?</span> <span class="n">TRUE</span> <span class="o">:</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC620'><br/></div><div class='line' id='LC621'>	<span class="k">if</span> <span class="p">(</span> <span class="o">!</span><span class="n">found_plan</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC622'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n\n</span><span class="s">Enforced Hill-climbing failed !&quot;</span><span class="p">);</span></div><div class='line' id='LC623'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">switching to Best-first Search now.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC624'>		<span class="n">reset_ff_states</span><span class="p">();</span></div><div class='line' id='LC625'>		<span class="n">found_plan</span> <span class="o">=</span> <span class="n">do_best_first_search</span><span class="p">();</span></div><div class='line' id='LC626'>	<span class="p">}</span></div><div class='line' id='LC627'><br/></div><div class='line' id='LC628'>	<span class="k">if</span> <span class="p">(</span> <span class="n">found_plan</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC629'>		<span class="cm">/*print_plan();*/</span>		</div><div class='line' id='LC630'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* D action add to group */</span></div><div class='line' id='LC631'>		<span class="n">build_action_group</span><span class="p">();</span></div><div class='line' id='LC632'><br/></div><div class='line' id='LC633'>		<span class="n">gfipPlan</span><span class="p">.</span><span class="n">num_sons</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC634'>		<span class="n">gfipPlan</span><span class="p">.</span><span class="n">action</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC635'><br/></div><div class='line' id='LC636'>		<span class="n">print_plan</span><span class="p">();</span></div><div class='line' id='LC637'><br/></div><div class='line' id='LC638'>		<span class="cm">/*put the ultimate goal to the solved set*/</span></div><div class='line' id='LC639'>		<span class="n">StateActionPair</span> <span class="o">*</span><span class="n">g</span> <span class="o">=</span> <span class="n">new_StateActionPair</span><span class="p">();</span></div><div class='line' id='LC640'>		<span class="n">make_state</span><span class="p">(</span><span class="o">&amp;</span><span class="n">g</span><span class="o">-&gt;</span><span class="n">state</span><span class="p">,</span> <span class="n">gnum_ft_conn</span><span class="p">);</span></div><div class='line' id='LC641'>		<span class="n">g</span><span class="o">-&gt;</span><span class="n">state</span><span class="p">.</span><span class="n">max_F</span> <span class="o">=</span> <span class="n">gnum_ft_conn</span><span class="p">;</span></div><div class='line' id='LC642'>		<span class="n">source_to_dest</span><span class="p">(</span><span class="o">&amp;</span><span class="n">g</span><span class="o">-&gt;</span><span class="n">state</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ggoal_state</span><span class="p">);</span></div><div class='line' id='LC643'>		<span class="n">g</span><span class="o">-&gt;</span><span class="n">state</span><span class="p">.</span><span class="n">num_L</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC644'>		<span class="n">g</span><span class="o">-&gt;</span><span class="n">state</span><span class="p">.</span><span class="n">L</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="mi">10000000</span><span class="p">;</span> <span class="cm">/*make it the biggest*/</span></div><div class='line' id='LC645'>		<span class="n">add_solved_state</span><span class="p">(</span><span class="n">g</span><span class="p">);</span></div><div class='line' id='LC646'>		<span class="cm">/*ugly, but work*/</span></div><div class='line' id='LC647'><br/></div><div class='line' id='LC648'>		<span class="n">convert_ff_plan_to_fip_plan</span><span class="p">(</span> <span class="o">&amp;</span><span class="n">gfipPlan</span> <span class="p">);</span>		</div><div class='line' id='LC649'><br/></div><div class='line' id='LC650'>		<span class="n">solve_unsolved_states</span><span class="p">();</span></div><div class='line' id='LC651'><br/></div><div class='line' id='LC652'>		<span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">gsolved_states</span><span class="p">){</span></div><div class='line' id='LC653'>			<span class="n">printf</span><span class="p">(</span><span class="s">&quot;No solutions are found! The problem is unsolvable.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC654'>			<span class="n">exit</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC655'>		<span class="p">}</span><span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">g_is_strong</span><span class="p">){</span></div><div class='line' id='LC656'>			<span class="n">StateActionPair</span> <span class="o">*</span><span class="n">ptr</span> <span class="o">=</span> <span class="n">gsolved_states</span><span class="p">;</span></div><div class='line' id='LC657'>			<span class="n">Bool</span> <span class="n">valid</span> <span class="o">=</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC658'>			<span class="k">while</span><span class="p">(</span><span class="n">ptr</span><span class="p">){</span></div><div class='line' id='LC659'>				<span class="k">if</span><span class="p">(</span><span class="n">ptr</span><span class="o">-&gt;</span><span class="n">state</span><span class="p">.</span><span class="n">num_L</span> <span class="o">==</span> <span class="mi">1</span> <span class="o">&amp;&amp;</span> <span class="n">ptr</span><span class="o">-&gt;</span><span class="n">state</span><span class="p">.</span><span class="n">L</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">==</span> <span class="mi">1</span><span class="p">){</span></div><div class='line' id='LC660'>					<span class="n">valid</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC661'>					<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC662'>				<span class="p">}</span></div><div class='line' id='LC663'>				<span class="n">ptr</span> <span class="o">=</span> <span class="n">ptr</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">;</span></div><div class='line' id='LC664'>			<span class="p">}</span></div><div class='line' id='LC665'>			<span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">valid</span><span class="p">){</span></div><div class='line' id='LC666'>				<span class="n">printf</span><span class="p">(</span><span class="s">&quot;The initial state is a dead-end! The problem is unsolvable.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC667'>				<span class="n">exit</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC668'>			<span class="p">}</span></div><div class='line' id='LC669'>		<span class="p">}</span></div><div class='line' id='LC670'><br/></div><div class='line' id='LC671'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;##########################################</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC672'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;#####   PROCEDURE-LIKE CODE   ############</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC673'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;##########################################</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC674'>		<span class="cm">/* print_fip_plan_1( is_solved_state(&amp;ginitial_state) , &amp;gfipPlan, 1); */</span>		</div><div class='line' id='LC675'><br/></div><div class='line' id='LC676'>		<span class="cm">/* times( &amp;end ); */</span></div><div class='line' id='LC677'>		<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">end</span><span class="p">);</span></div><div class='line' id='LC678'>		<span class="n">TIME</span><span class="p">(</span> <span class="n">gsearch_time</span> <span class="p">);</span></div><div class='line' id='LC679'><br/></div><div class='line' id='LC680'>		<span class="cm">/* myend = clock(); */</span></div><div class='line' id='LC681'>		<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">myend</span><span class="p">);</span></div><div class='line' id='LC682'><br/></div><div class='line' id='LC683'>		<span class="cm">/* printf(&quot;my cac is %7.3f\n&quot;, 1.0*(myend.millitm - mystart.millitm)/1000.0); */</span></div><div class='line' id='LC684'>		<span class="n">print_fip_plan_2</span><span class="p">();</span> </div><div class='line' id='LC685'><br/></div><div class='line' id='LC686'>		<span class="k">if</span><span class="p">(</span><span class="n">to_print_state</span><span class="p">)</span></div><div class='line' id='LC687'>			<span class="n">print_all_states</span><span class="p">();</span></div><div class='line' id='LC688'>		<span class="cm">/* print_fip_plan_3( &amp;gfipPlan, 0 ); */</span>  </div><div class='line' id='LC689'>	<span class="p">}</span></div><div class='line' id='LC690'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;The total searching time is %7.3f</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="p">(</span><span class="n">myend</span><span class="p">.</span><span class="n">time</span> <span class="o">-</span> <span class="n">mystart</span><span class="p">.</span><span class="n">time</span><span class="p">)</span> <span class="o">+</span> <span class="p">(</span><span class="n">myend</span><span class="p">.</span><span class="n">millitm</span> <span class="o">-</span> <span class="n">mystart</span><span class="p">.</span><span class="n">millitm</span><span class="p">)</span><span class="o">/</span><span class="mf">1000.0</span><span class="p">);</span></div><div class='line' id='LC691'><br/></div><div class='line' id='LC692'>&nbsp;&nbsp;<span class="n">output_planner_info</span><span class="p">();</span></div><div class='line' id='LC693'><br/></div><div class='line' id='LC694'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC695'>	<span class="n">exit</span><span class="p">(</span> <span class="mi">0</span> <span class="p">);</span></div><div class='line' id='LC696'><br/></div><div class='line' id='LC697'><span class="p">}</span></div><div class='line' id='LC698'><br/></div><div class='line' id='LC699'><br/></div><div class='line' id='LC700'><br/></div><div class='line' id='LC701'><br/></div><div class='line' id='LC702'><br/></div><div class='line' id='LC703'><br/></div><div class='line' id='LC704'><br/></div><div class='line' id='LC705'><br/></div><div class='line' id='LC706'><br/></div><div class='line' id='LC707'><br/></div><div class='line' id='LC708'><br/></div><div class='line' id='LC709'><span class="cm">/*</span></div><div class='line' id='LC710'><span class="cm">*  ----------------------------- HELPING FUNCTIONS ----------------------------</span></div><div class='line' id='LC711'><span class="cm">*/</span></div><div class='line' id='LC712'><br/></div><div class='line' id='LC713'><br/></div><div class='line' id='LC714'><br/></div><div class='line' id='LC715'><br/></div><div class='line' id='LC716'><br/></div><div class='line' id='LC717'><br/></div><div class='line' id='LC718'><br/></div><div class='line' id='LC719'><br/></div><div class='line' id='LC720'><br/></div><div class='line' id='LC721'><br/></div><div class='line' id='LC722'><br/></div><div class='line' id='LC723'><br/></div><div class='line' id='LC724'><span class="kt">void</span> <span class="nf">output_planner_info</span><span class="p">(</span> <span class="kt">void</span> <span class="p">)</span></div><div class='line' id='LC725'><br/></div><div class='line' id='LC726'><span class="p">{</span></div><div class='line' id='LC727'><br/></div><div class='line' id='LC728'>	<span class="n">printf</span><span class="p">(</span> <span class="s">&quot;</span><span class="se">\n\n</span><span class="s">time spent: %7.3f seconds instantiating %d easy, %d hard action templates&quot;</span><span class="p">,</span> </div><div class='line' id='LC729'>		<span class="n">gtempl_time</span><span class="p">,</span> <span class="n">gnum_easy_templates</span><span class="p">,</span> <span class="n">gnum_hard_mixed_operators</span> <span class="p">);</span></div><div class='line' id='LC730'>	<span class="n">printf</span><span class="p">(</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">            %7.3f seconds reachability analysis, yielding %d facts and %d actions&quot;</span><span class="p">,</span> </div><div class='line' id='LC731'>		<span class="n">greach_time</span><span class="p">,</span> <span class="n">gnum_pp_facts</span><span class="p">,</span> <span class="n">gnum_actions</span> <span class="p">);</span></div><div class='line' id='LC732'>	<span class="n">printf</span><span class="p">(</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">            %7.3f seconds creating final representation with %d relevant facts&quot;</span><span class="p">,</span> </div><div class='line' id='LC733'>		<span class="n">grelev_time</span><span class="p">,</span> <span class="n">gnum_relevant_facts</span> <span class="p">);</span></div><div class='line' id='LC734'>	<span class="n">printf</span><span class="p">(</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">            %7.3f seconds building connectivity graph&quot;</span><span class="p">,</span></div><div class='line' id='LC735'>		<span class="n">gconn_time</span> <span class="p">);</span></div><div class='line' id='LC736'>	<span class="n">printf</span><span class="p">(</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">            %7.3f seconds searching, evaluating %d states, to a max depth of %d&quot;</span><span class="p">,</span> </div><div class='line' id='LC737'>		<span class="n">gsearch_time</span><span class="p">,</span> <span class="n">gevaluated_states</span><span class="p">,</span> <span class="n">gmax_search_depth</span> <span class="p">);</span></div><div class='line' id='LC738'>	<span class="n">printf</span><span class="p">(</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">            %7.3f seconds total time&quot;</span><span class="p">,</span> </div><div class='line' id='LC739'>		<span class="n">gtempl_time</span> <span class="o">+</span> <span class="n">greach_time</span> <span class="o">+</span> <span class="n">grelev_time</span> <span class="o">+</span> <span class="n">gconn_time</span> <span class="o">+</span> <span class="n">gsearch_time</span> <span class="p">);</span></div><div class='line' id='LC740'><br/></div><div class='line' id='LC741'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC742'><br/></div><div class='line' id='LC743'>	<span class="n">exit</span><span class="p">(</span> <span class="mi">0</span> <span class="p">);</span></div><div class='line' id='LC744'><br/></div><div class='line' id='LC745'>	<span class="n">print_official_result</span><span class="p">();</span></div><div class='line' id='LC746'><br/></div><div class='line' id='LC747'><span class="p">}</span></div><div class='line' id='LC748'><br/></div><div class='line' id='LC749'><br/></div><div class='line' id='LC750'><span class="kt">FILE</span> <span class="o">*</span><span class="n">out</span><span class="p">;</span></div><div class='line' id='LC751'><br/></div><div class='line' id='LC752'><span class="kt">void</span> <span class="nf">print_official_result</span><span class="p">(</span> <span class="kt">void</span> <span class="p">)</span></div><div class='line' id='LC753'><br/></div><div class='line' id='LC754'><span class="p">{</span></div><div class='line' id='LC755'><br/></div><div class='line' id='LC756'>	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC757'>	<span class="kt">char</span> <span class="n">name</span><span class="p">[</span><span class="n">MAX_LENGTH</span><span class="p">];</span></div><div class='line' id='LC758'><br/></div><div class='line' id='LC759'>	<span class="n">sprintf</span><span class="p">(</span> <span class="n">name</span><span class="p">,</span> <span class="s">&quot;%s.soln&quot;</span><span class="p">,</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">fct_file_name</span> <span class="p">);</span></div><div class='line' id='LC760'><br/></div><div class='line' id='LC761'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span> <span class="p">(</span><span class="n">out</span> <span class="o">=</span> <span class="n">fopen</span><span class="p">(</span> <span class="n">name</span><span class="p">,</span> <span class="s">&quot;w&quot;</span><span class="p">))</span> <span class="o">==</span> <span class="nb">NULL</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC762'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n\n</span><span class="s">Can&#39;t open official output file!</span><span class="se">\n\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC763'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC764'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC765'><br/></div><div class='line' id='LC766'>&nbsp;&nbsp;<span class="cm">/*times( &amp;lend );*/</span></div><div class='line' id='LC767'>&nbsp;&nbsp;<span class="n">ftime</span><span class="p">(</span><span class="o">&amp;</span><span class="n">lend</span><span class="p">);</span></div><div class='line' id='LC768'>&nbsp;&nbsp;<span class="n">fprintf</span><span class="p">(</span><span class="n">out</span><span class="p">,</span> <span class="s">&quot;Time %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> </div><div class='line' id='LC769'>	  <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="p">((</span><span class="n">lend</span><span class="p">.</span><span class="n">millitm</span> <span class="o">-</span> <span class="n">lstart</span><span class="p">.</span><span class="n">millitm</span><span class="p">)</span> <span class="o">/</span> <span class="mf">1000.0</span><span class="p">));</span></div><div class='line' id='LC770'><br/></div><div class='line' id='LC771'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">gnum_plan_ops</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC772'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">print_official_op_name</span><span class="p">(</span> <span class="n">gplan_ops</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="p">);</span></div><div class='line' id='LC773'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">fprintf</span><span class="p">(</span><span class="n">out</span><span class="p">,</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC774'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC775'><br/></div><div class='line' id='LC776'>	<span class="n">fclose</span><span class="p">(</span> <span class="n">out</span> <span class="p">);</span></div><div class='line' id='LC777'><br/></div><div class='line' id='LC778'><span class="p">}</span></div><div class='line' id='LC779'><br/></div><div class='line' id='LC780'><br/></div><div class='line' id='LC781'><br/></div><div class='line' id='LC782'><span class="kt">void</span> <span class="nf">print_official_op_name</span><span class="p">(</span> <span class="kt">int</span> <span class="n">index</span> <span class="p">)</span></div><div class='line' id='LC783'><br/></div><div class='line' id='LC784'><span class="p">{</span></div><div class='line' id='LC785'><br/></div><div class='line' id='LC786'>	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC787'>	<span class="n">Action</span> <span class="o">*</span><span class="n">a</span> <span class="o">=</span> <span class="n">gop_conn</span><span class="p">[</span><span class="n">index</span><span class="p">].</span><span class="n">action</span><span class="p">;</span></div><div class='line' id='LC788'><br/></div><div class='line' id='LC789'>	<span class="k">if</span> <span class="p">(</span> <span class="n">a</span><span class="o">-&gt;</span><span class="n">norm_operator</span> <span class="o">||</span></div><div class='line' id='LC790'>		<span class="n">a</span><span class="o">-&gt;</span><span class="n">pseudo_action</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC791'>			<span class="n">fprintf</span><span class="p">(</span><span class="n">out</span><span class="p">,</span> <span class="s">&quot;(%s&quot;</span><span class="p">,</span> <span class="n">a</span><span class="o">-&gt;</span><span class="n">name</span> <span class="p">);</span> </div><div class='line' id='LC792'>			<span class="k">for</span> <span class="p">(</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">a</span><span class="o">-&gt;</span><span class="n">num_name_vars</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC793'>				<span class="n">fprintf</span><span class="p">(</span><span class="n">out</span><span class="p">,</span> <span class="s">&quot; %s&quot;</span><span class="p">,</span> <span class="n">gconstants</span><span class="p">[</span><span class="n">a</span><span class="o">-&gt;</span><span class="n">name_inst_table</span><span class="p">[</span><span class="n">i</span><span class="p">]]);</span></div><div class='line' id='LC794'>			<span class="p">}</span></div><div class='line' id='LC795'>			<span class="n">fprintf</span><span class="p">(</span><span class="n">out</span><span class="p">,</span> <span class="s">&quot;)&quot;</span><span class="p">);</span></div><div class='line' id='LC796'>	<span class="p">}</span></div><div class='line' id='LC797'><br/></div><div class='line' id='LC798'><span class="p">}</span></div><div class='line' id='LC799'><br/></div><div class='line' id='LC800'><br/></div><div class='line' id='LC801'><br/></div><div class='line' id='LC802'><span class="kt">void</span> <span class="nf">ff_usage</span><span class="p">(</span> <span class="kt">void</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC803'><br/></div><div class='line' id='LC804'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">usage of FIP_ff:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC805'><br/></div><div class='line' id='LC806'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">OPTIONS   DESCRIPTIONS</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC807'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;-p &lt;str&gt;    path for operator and fact file</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC808'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;-o &lt;str&gt;    operator file name</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC809'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;-f &lt;str&gt;    fact file name</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC810'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;-a &lt;str&gt;    multiple purpose file name</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC811'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;-t &lt;str&gt;    type of planning. Either strong or strong cyclic</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC812'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;-i &lt;num&gt;    run-time information level( preset: 1 )</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC813'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;      0     only times</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC814'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;      1     problem name, planning process infos</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC815'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    101     parsed problem data</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC816'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    102     cleaned up ADL problem</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC817'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    103     collected string tables</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC818'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    104     encoded domain</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC819'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    105     predicates inertia info</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC820'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    106     splitted initial state</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC821'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    107     domain with Wff s normalized</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC822'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    108     domain with NOT conds translated</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC823'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    109     splitted domain</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC824'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    110     cleaned up easy domain</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC825'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    111     unaries encoded easy domain</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC826'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    112     effects multiplied easy domain</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC827'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    113     inertia removed easy domain</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC828'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    114     easy action templates</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC829'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    115     cleaned up hard domain representation</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC830'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    116     mixed hard domain representation</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC831'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    117     final hard domain representation</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC832'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    118     reachability analysis results</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC833'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    119     facts selected as relevant</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC834'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    120     final domain and problem representations</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC835'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    121     connectivity graph</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC836'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    122     fixpoint result on each evaluated state</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC837'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    123     1P extracted on each evaluated state</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC838'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    124     H set collected for each evaluated state</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC839'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    125     False sets of goals &lt;GAM&gt;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC840'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    126     detected ordering constraints leq_h &lt;GAM&gt;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC841'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;    127     the Goal Agenda &lt;GAM&gt;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC842'><br/></div><div class='line' id='LC843'><br/></div><div class='line' id='LC844'><br/></div><div class='line' id='LC845'>	<span class="cm">/*   printf(&quot;    109     reachability analysis results\n&quot;); */</span></div><div class='line' id='LC846'>	<span class="cm">/*   printf(&quot;    110     final domain representation\n&quot;); */</span></div><div class='line' id='LC847'>	<span class="cm">/*   printf(&quot;    111     connectivity graph\n&quot;); */</span></div><div class='line' id='LC848'>	<span class="cm">/*   printf(&quot;    112     False sets of goals &lt;GAM&gt;\n&quot;); */</span></div><div class='line' id='LC849'>	<span class="cm">/*   printf(&quot;    113     detected ordering constraints leq_h &lt;GAM&gt;\n&quot;); */</span></div><div class='line' id='LC850'>	<span class="cm">/*   printf(&quot;    114     the Goal Agenda &lt;GAM&gt;\n&quot;); */</span></div><div class='line' id='LC851'>	<span class="cm">/*   printf(&quot;    115     fixpoint result on each evaluated state &lt;1Ph&gt;\n&quot;); */</span></div><div class='line' id='LC852'>	<span class="cm">/*   printf(&quot;    116     1P extracted on each evaluated state &lt;1Ph&gt;\n&quot;); */</span></div><div class='line' id='LC853'>	<span class="cm">/*   printf(&quot;    117     H set collected for each evaluated state &lt;1Ph&gt;\n&quot;); */</span></div><div class='line' id='LC854'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">-d &lt;num&gt;    switch on debugging</span><span class="se">\n\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC855'><span class="p">}</span></div><div class='line' id='LC856'><br/></div><div class='line' id='LC857'><br/></div><div class='line' id='LC858'><span class="cm">/* process the commond line */</span></div><div class='line' id='LC859'><span class="n">Bool</span> <span class="nf">process_command_line</span><span class="p">(</span> <span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">argv</span><span class="p">[]</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC860'><br/></div><div class='line' id='LC861'>	<span class="kt">char</span> <span class="n">option</span><span class="p">;</span></div><div class='line' id='LC862'><br/></div><div class='line' id='LC863'>	<span class="n">gcmd_line</span><span class="p">.</span><span class="n">display_info</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC864'>	<span class="n">gcmd_line</span><span class="p">.</span><span class="n">debug</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC865'><br/></div><div class='line' id='LC866'>	<span class="n">memset</span><span class="p">(</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">ops_file_name</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">MAX_LENGTH</span><span class="p">);</span></div><div class='line' id='LC867'>	<span class="n">memset</span><span class="p">(</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">fct_file_name</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">MAX_LENGTH</span><span class="p">);</span></div><div class='line' id='LC868'>	<span class="n">memset</span><span class="p">(</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">mul_file_name</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">MAX_LENGTH</span><span class="p">);</span></div><div class='line' id='LC869'>	<span class="n">memset</span><span class="p">(</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">path</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">MAX_LENGTH</span><span class="p">);</span></div><div class='line' id='LC870'><br/></div><div class='line' id='LC871'>	<span class="k">while</span> <span class="p">(</span> <span class="o">--</span><span class="n">argc</span> <span class="o">&amp;&amp;</span> <span class="o">++</span><span class="n">argv</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC872'>		<span class="k">if</span> <span class="p">(</span> <span class="o">*</span><span class="n">argv</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">!=</span> <span class="sc">&#39;-&#39;</span> <span class="o">||</span> <span class="n">strlen</span><span class="p">(</span><span class="o">*</span><span class="n">argv</span><span class="p">)</span> <span class="o">!=</span> <span class="mi">2</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC873'>			<span class="k">return</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC874'>		<span class="p">}</span></div><div class='line' id='LC875'>		<span class="n">option</span> <span class="o">=</span> <span class="o">*++</span><span class="n">argv</span><span class="p">[</span><span class="mi">0</span><span class="p">];</span></div><div class='line' id='LC876'>		<span class="k">switch</span> <span class="p">(</span> <span class="n">option</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC877'>			<span class="nl">default:</span></div><div class='line' id='LC878'>				<span class="k">if</span> <span class="p">(</span> <span class="o">--</span><span class="n">argc</span> <span class="o">&amp;&amp;</span> <span class="o">++</span><span class="n">argv</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC879'>					<span class="k">switch</span> <span class="p">(</span> <span class="n">option</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC880'>						<span class="k">case</span> <span class="sc">&#39;p&#39;</span>:</div><div class='line' id='LC881'>							<span class="n">strncpy</span><span class="p">(</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">path</span><span class="p">,</span> <span class="o">*</span><span class="n">argv</span><span class="p">,</span> <span class="n">MAX_LENGTH</span> <span class="p">);</span></div><div class='line' id='LC882'>							<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC883'>						<span class="k">case</span> <span class="sc">&#39;o&#39;</span>:</div><div class='line' id='LC884'>							<span class="n">strncpy</span><span class="p">(</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">ops_file_name</span><span class="p">,</span> <span class="o">*</span><span class="n">argv</span><span class="p">,</span> <span class="n">MAX_LENGTH</span> <span class="p">);</span></div><div class='line' id='LC885'>							<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC886'>						<span class="k">case</span> <span class="sc">&#39;f&#39;</span>:</div><div class='line' id='LC887'>							<span class="n">strncpy</span><span class="p">(</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">fct_file_name</span><span class="p">,</span> <span class="o">*</span><span class="n">argv</span><span class="p">,</span> <span class="n">MAX_LENGTH</span> <span class="p">);</span></div><div class='line' id='LC888'>							<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC889'>						<span class="k">case</span> <span class="sc">&#39;m&#39;</span>:</div><div class='line' id='LC890'>							<span class="n">strncpy</span><span class="p">(</span> <span class="n">gcmd_line</span><span class="p">.</span><span class="n">mul_file_name</span><span class="p">,</span> <span class="o">*</span><span class="n">argv</span><span class="p">,</span> <span class="n">MAX_LENGTH</span> <span class="p">);</span></div><div class='line' id='LC891'>							<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC892'>						<span class="k">case</span> <span class="sc">&#39;i&#39;</span>:</div><div class='line' id='LC893'>							<span class="n">sscanf</span><span class="p">(</span> <span class="o">*</span><span class="n">argv</span><span class="p">,</span> <span class="s">&quot;%d&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">display_info</span> <span class="p">);</span></div><div class='line' id='LC894'>							<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC895'>						<span class="k">case</span> <span class="sc">&#39;d&#39;</span>:</div><div class='line' id='LC896'>							<span class="n">sscanf</span><span class="p">(</span> <span class="o">*</span><span class="n">argv</span><span class="p">,</span> <span class="s">&quot;%d&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">gcmd_line</span><span class="p">.</span><span class="n">debug</span> <span class="p">);</span></div><div class='line' id='LC897'>							<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC898'>						<span class="k">case</span> <span class="sc">&#39;s&#39;</span>:</div><div class='line' id='LC899'>							<span class="n">to_print_state</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC900'>							<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC901'>						<span class="k">case</span> <span class="sc">&#39;t&#39;</span>:</div><div class='line' id='LC902'>							<span class="k">if</span><span class="p">(</span><span class="n">strcmp</span><span class="p">(</span><span class="o">*</span><span class="n">argv</span><span class="p">,</span> <span class="s">&quot;strong&quot;</span><span class="p">)</span><span class="o">==</span> <span class="mi">0</span><span class="p">){</span></div><div class='line' id='LC903'>								<span class="n">g_is_strong</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span>			</div><div class='line' id='LC904'>							<span class="p">}</span><span class="k">else</span><span class="p">{</span></div><div class='line' id='LC905'>								<span class="n">g_is_strong</span> <span class="o">=</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC906'>							<span class="p">}</span></div><div class='line' id='LC907'>							<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC908'>						<span class="nl">default:</span></div><div class='line' id='LC909'>							<span class="n">printf</span><span class="p">(</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">ff: unknown option: %c entered</span><span class="se">\n\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">option</span> <span class="p">);</span></div><div class='line' id='LC910'>							<span class="k">return</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC911'>					<span class="p">}</span></div><div class='line' id='LC912'>				<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC913'>					<span class="k">return</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC914'>				<span class="p">}</span></div><div class='line' id='LC915'>			<span class="p">}</span></div><div class='line' id='LC916'>	<span class="p">}</span></div><div class='line' id='LC917'>	<span class="k">return</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC918'><span class="p">}</span></div><div class='line' id='LC919'><br/></div></pre></div></td>
          </tr>
        </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.04192s from github-fe122-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close js-ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

      <div class="hidden" id="js-avatars" data-url="https://avatars.github.com"></div>
  </body>
</html>

