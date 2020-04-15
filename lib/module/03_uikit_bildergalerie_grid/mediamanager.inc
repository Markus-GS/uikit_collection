<?php
  $mediamanager_typ = rex_sql::factory();
  $mediamanager_typ->setTable('rex_media_manager_type');
        $mediamanager_typ->setValue('name','thumbnail_uikit');
        $mediamanager_typ->setValue('description','Zur Darstellung der Bilder als Thumbnail.');

        try {
          $mediamanager_typ->insert();
          echo rex_view::success('Der Media Manager "thumbnail_uikit" Typ wurde angelegt. ');
        } catch (rex_sql_exception $e) {
              echo rex_view::warning('Der Media Manager "thumbnail_uikit" Typ wurde nicht angelegt.<br/>Wahrscheinlich existiert er schon.');
        }

        $mediamanager_typ_id = (int) $mediamanager_typ->getLastId();

        $mediamanager_typ_effekt = rex_sql::factory();
        $mediamanager_typ_effekt->setTable('rex_media_manager_type_effect');
        $mediamanager_typ_effekt->setValue('type_id', $mediamanager_typ_id);
        $mediamanager_typ_effekt->setValue('priority', 1);
        $mediamanager_typ_effekt->setValue('effect', 'focuspoint_fit');
        $mediamanager_typ_effekt->setValue('parameters', '{"rex_effect_rounded_corners":{"rex_effect_rounded_corners_topleft":"","rex_effect_rounded_corners_topright":"","rex_effect_rounded_corners_bottomleft":"","rex_effect_rounded_corners_bottomright":""},"rex_effect_workspace":{"rex_effect_workspace_width":"","rex_effect_workspace_height":"","rex_effect_workspace_hpos":"left","rex_effect_workspace_vpos":"top","rex_effect_workspace_set_transparent":"colored","rex_effect_workspace_bg_r":"","rex_effect_workspace_bg_g":"","rex_effect_workspace_bg_b":""},"rex_effect_crop":{"rex_effect_crop_width":"1600","rex_effect_crop_height":"800","rex_effect_crop_offset_width":"","rex_effect_crop_offset_height":"","rex_effect_crop_hpos":"center","rex_effect_crop_vpos":"middle"},"rex_effect_insert_image":{"rex_effect_insert_image_brandimage":"","rex_effect_insert_image_hpos":"left","rex_effect_insert_image_vpos":"top","rex_effect_insert_image_padding_x":"-10","rex_effect_insert_image_padding_y":"-10"},"rex_effect_rotate":{"rex_effect_rotate_rotate":"0"},"rex_effect_filter_colorize":{"rex_effect_filter_colorize_filter_r":"","rex_effect_filter_colorize_filter_g":"","rex_effect_filter_colorize_filter_b":""},"rex_effect_image_properties":{"rex_effect_image_properties_jpg_quality":"","rex_effect_image_properties_png_compression":"","rex_effect_image_properties_webp_quality":"","rex_effect_image_properties_interlace":null},"rex_effect_focuspoint_fit":{"rex_effect_focuspoint_fit_width":"400","rex_effect_focuspoint_fit_height":"300","rex_effect_focuspoint_fit_zoom":"Ausschnitt gr\u00f6\u00dftm\u00f6glich w\u00e4hlen (100%)","rex_effect_focuspoint_fit_hpos":"","rex_effect_focuspoint_fit_vpos":"","rex_effect_focuspoint_fit_fp":"Fokuspunkt des Bildes, Fallback allgemeiner Bezugspunkt"},"rex_effect_focuspoint_resize":{"rex_effect_focuspoint_resize_width":"","rex_effect_focuspoint_resize_height":"","rex_effect_focuspoint_resize_style":"maximum","rex_effect_focuspoint_resize_allow_enlarge":"enlarge"},"rex_effect_filter_brightness":{"rex_effect_filter_brightness_brightness":""},"rex_effect_flip":{"rex_effect_flip_flip":"X"},"rex_effect_filter_contrast":{"rex_effect_filter_contrast_contrast":""},"rex_effect_filter_sharpen":{"rex_effect_filter_sharpen_amount":"80","rex_effect_filter_sharpen_radius":"0.5","rex_effect_filter_sharpen_threshold":"3"},"rex_effect_resize":{"rex_effect_resize_width":"700","rex_effect_resize_height":"400","rex_effect_resize_style":"maximum","rex_effect_resize_allow_enlarge":"enlarge"},"rex_effect_filter_blur":{"rex_effect_filter_blur_repeats":"10","rex_effect_filter_blur_type":"gaussian","rex_effect_filter_blur_smoothit":""},"rex_effect_mirror":{"rex_effect_mirror_height":"","rex_effect_mirror_set_transparent":"colored","rex_effect_mirror_bg_r":"","rex_effect_mirror_bg_g":"","rex_effect_mirror_bg_b":""},"rex_effect_header":{"rex_effect_header_download":"open_media","rex_effect_header_cache":"no_cache"},"rex_effect_convert2img":{"rex_effect_convert2img_convert_to":"jpg","rex_effect_convert2img_density":"150"},"rex_effect_mediapath":{"rex_effect_mediapath_mediapath":""}}');

        try {
          $mediamanager_typ_effekt->insert();
          echo rex_view::success('Der Media Manager Effekt wurde angelegt und kann konfiguriert werden!');
        } catch (rex_sql_exception $e) {
              echo rex_view::warning('Der Media Manager Effekt wurde nicht angelegt.<br/>Wahrscheinlich existiert er schon.');
        }


  $mediamanager_typ = rex_sql::factory();
  $mediamanager_typ->setTable('rex_media_manager_type');
        $mediamanager_typ->setValue('name','Lightbox_uikit');
        $mediamanager_typ->setValue('description','Zur Darstellung der Bilder in der Lightbox');

        try {
          $mediamanager_typ->insert();
          echo rex_view::success('Der Media Manager "Lightbox_uikit" Typ wurde angelegt. ');
        } catch (rex_sql_exception $e) {
              echo rex_view::warning('Der Media Manager "Lightbox_uikit" Typ wurde nicht angelegt.<br/>Wahrscheinlich existiert er schon.');
        }

        $mediamanager_typ_id = (int) $mediamanager_typ->getLastId();

        $mediamanager_typ_effekt = rex_sql::factory();
        $mediamanager_typ_effekt->setTable('rex_media_manager_type_effect');
        $mediamanager_typ_effekt->setValue('type_id', $mediamanager_typ_id);
        $mediamanager_typ_effekt->setValue('priority', 1);
        $mediamanager_typ_effekt->setValue('effect', 'focuspoint_resize');
        $mediamanager_typ_effekt->setValue('parameters', '{"rex_effect_rounded_corners":{"rex_effect_rounded_corners_topleft":"","rex_effect_rounded_corners_topright":"","rex_effect_rounded_corners_bottomleft":"","rex_effect_rounded_corners_bottomright":""},"rex_effect_workspace":{"rex_effect_workspace_width":"","rex_effect_workspace_height":"","rex_effect_workspace_hpos":"left","rex_effect_workspace_vpos":"top","rex_effect_workspace_set_transparent":"colored","rex_effect_workspace_bg_r":"","rex_effect_workspace_bg_g":"","rex_effect_workspace_bg_b":""},"rex_effect_crop":{"rex_effect_crop_width":"","rex_effect_crop_height":"","rex_effect_crop_offset_width":"","rex_effect_crop_offset_height":"","rex_effect_crop_hpos":"center","rex_effect_crop_vpos":"middle"},"rex_effect_insert_image":{"rex_effect_insert_image_brandimage":"","rex_effect_insert_image_hpos":"left","rex_effect_insert_image_vpos":"top","rex_effect_insert_image_padding_x":"-10","rex_effect_insert_image_padding_y":"-10"},"rex_effect_rotate":{"rex_effect_rotate_rotate":"0"},"rex_effect_filter_colorize":{"rex_effect_filter_colorize_filter_r":"","rex_effect_filter_colorize_filter_g":"","rex_effect_filter_colorize_filter_b":""},"rex_effect_image_properties":{"rex_effect_image_properties_jpg_quality":"","rex_effect_image_properties_png_compression":"","rex_effect_image_properties_webp_quality":"","rex_effect_image_properties_interlace":null},"rex_effect_focuspoint_fit":{"rex_effect_focuspoint_fit_width":"","rex_effect_focuspoint_fit_height":"","rex_effect_focuspoint_fit_zoom":"Zielgr\u00f6\u00dfe verwenden (0%)","rex_effect_focuspoint_fit_hpos":"","rex_effect_focuspoint_fit_vpos":"","rex_effect_focuspoint_fit_fp":"Fokuspunkt des Bildes, Fallback allgemeiner Bezugspunkt"},"rex_effect_focuspoint_resize":{"rex_effect_focuspoint_resize_width":"1400","rex_effect_focuspoint_resize_height":"","rex_effect_focuspoint_resize_style":"maximum","rex_effect_focuspoint_resize_allow_enlarge":"enlarge"},"rex_effect_filter_brightness":{"rex_effect_filter_brightness_brightness":""},"rex_effect_flip":{"rex_effect_flip_flip":"X"},"rex_effect_filter_contrast":{"rex_effect_filter_contrast_contrast":""},"rex_effect_filter_sharpen":{"rex_effect_filter_sharpen_amount":"80","rex_effect_filter_sharpen_radius":"0.5","rex_effect_filter_sharpen_threshold":"3"},"rex_effect_resize":{"rex_effect_resize_width":"","rex_effect_resize_height":"","rex_effect_resize_style":"maximum","rex_effect_resize_allow_enlarge":"enlarge"},"rex_effect_filter_blur":{"rex_effect_filter_blur_repeats":"10","rex_effect_filter_blur_type":"gaussian","rex_effect_filter_blur_smoothit":""},"rex_effect_mirror":{"rex_effect_mirror_height":"","rex_effect_mirror_set_transparent":"colored","rex_effect_mirror_bg_r":"","rex_effect_mirror_bg_g":"","rex_effect_mirror_bg_b":""},"rex_effect_header":{"rex_effect_header_download":"open_media","rex_effect_header_cache":"no_cache"},"rex_effect_convert2img":{"rex_effect_convert2img_convert_to":"jpg","rex_effect_convert2img_density":"150"},"rex_effect_mediapath":{"rex_effect_mediapath_mediapath":""}}');
        try {
          $mediamanager_typ_effekt->insert();
          echo rex_view::success('Der Media Manager Effekt wurde angelegt und kann konfiguriert werden!');
        } catch (rex_sql_exception $e) {
              echo rex_view::warning('Der Media Manager Effekt wurde nicht angelegt.<br/>Wahrscheinlich existiert er schon.');
        }