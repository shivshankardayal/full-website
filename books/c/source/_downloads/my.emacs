(custom-set-variables
  ;; custom-set-variables was added by Custom.
  ;; If you edit it by hand, you could mess it up, so be careful.
  ;; Your init file should contain only one such instance.
  ;; If there is more than one, they won't work right.
 '(column-number-mode t)
 '(cua-mode t nil (cua-base))
 '(ecb-layout-name "leftright2")
 '(ecb-options-version "2.40")
 '(ecb-windows-height 0.2)
 '(ecb-windows-width 0.2)
 '(make-backup-files nil)
 '(scroll-bar-mode (quote right)))
(custom-set-faces
  ;; custom-set-faces was added by Custom.
  ;; If you edit it by hand, you could mess it up, so be careful.
  ;; Your init file should contain only one such instance.
  ;; If there is more than one, they won't work right.
 '(default ((t (:inherit nil :stipple nil :background "#ffffff" :foreground "#221f1e" :inverse-video nil :box nil :strike-through nil :overline nil :underline nil :slant normal :weight normal :height 98 :width semi-condensed :foundry "misc" :family "fixed")))))
(require 'cedet)
(require 'semantic/analyze)
(provide 'semantic-analyze)
(provide 'semantic-ctxt)
(provide 'semanticdb)
(provide 'semanticdb-find)
(provide 'semanticdb-mode)
(provide 'semantic-load)
(load "~/.emacs.d/flymake.el")
(add-to-list 'load-path "~/.emacs.d/ecb-snap")

(require 'ecb)
(require 'ecb-autoloads)
(load "~/.emacs.d/rfringe.el")
(require 'rfringe)
(when (load "flymake" t)
  (defun flymake-pylint-init ()
    (let* ((temp-file (flymake-init-create-temp-buffer-copy
		       'flymake-create-temp-inplace))
           (local-file (file-relative-name
                        temp-file
                        (file-name-directory buffer-file-name))))
      (list "epylint" (list local-file))))
  
  (add-to-list 'flymake-allowed-file-name-masks
               '("\\.py\\'" flymake-pylint-init)))
(load-file "/usr/share/git-core/emacs/git.el")
(".+\\.c$" flymake-simple-make-init flymake-simple-cleanup flymake-get-real-file-name)
(setq TeX-auto-save t)
(setq TeX-parse-self t)
(setq-default TeX-master nil)
(load "auctex.el" nil t t)
(load "preview-latex.el" nil t t)
(add-to-list 'load-path "~/.emacs.d/autocomplete")
(add-to-list 'ac-dictionary-directories "~/.emacs.d/autocomplete/dict")
(require 'auto-complete-config)
(ac-config-default)
