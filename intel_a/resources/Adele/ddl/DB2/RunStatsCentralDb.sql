RUNSTATS ON TABLE adl.central_db_version WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.site               WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.database           WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.workspace_tree     WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.ws_tree_in_db      WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.multi_tree_ws_c_db WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.workspace_c_db     WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.contents_server    WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.history_event      WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.associated_comment WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.file_type          WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;
RUNSTATS ON TABLE adl.change_set_c_db    WITH DISTRIBUTION AND INDEXES ALL SHRLEVEL REFERENCE;
COMMIT;

