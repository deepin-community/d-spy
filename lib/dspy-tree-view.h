/* dspy-tree-view.h
 *
 * Copyright 2019 Christian Hergert <chergert@redhat.com>
 *
 * This file is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: LGPL-3.0-or-later
 */

#pragma once

#include <gtk/gtk.h>

#include "dspy-method-invocation.h"
#include "dspy-version-macros.h"

G_BEGIN_DECLS

#define DSPY_TYPE_TREE_VIEW (dspy_tree_view_get_type())

DSPY_AVAILABLE_IN_ALL
G_DECLARE_DERIVABLE_TYPE (DspyTreeView, dspy_tree_view, DSPY, TREE_VIEW, GtkTreeView)

struct _DspyTreeViewClass
{
  GtkTreeViewClass parent_class;

  void (*method_activated) (DspyTreeView         *self,
                            DspyMethodInvocation *invocation);

  /*< private >*/
  gpointer _reserved[8];
};

DSPY_AVAILABLE_IN_ALL
GtkWidget *dspy_tree_view_new (void);

G_END_DECLS
