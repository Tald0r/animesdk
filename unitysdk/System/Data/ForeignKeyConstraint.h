#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AcceptRejectRule.h"
#include "unitysdk/System/Data/Constraint.h"
#include "unitysdk/System/Data/DataKey.h"
#include "unitysdk/System/Data/DataRowAction.h"
#include "unitysdk/System/Data/Rule.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Data { class ConstraintCollection; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRelation; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AD98410)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CANENABLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1AD98820)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADECOMMIT_OFFSET UNITYSDK_OFFSET(0x1AD98A70)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEDELETE_OFFSET UNITYSDK_OFFSET(0x1AD98C10)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEROLLBACK_OFFSET UNITYSDK_OFFSET(0x1AD99310)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD99540)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AD98200)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANCLEARPARENTTABLE_OFFSET UNITYSDK_OFFSET(0x1AD99C70)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANREMOVEPARENTROW_OFFSET UNITYSDK_OFFSET(0x1AD99DD0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCASCADE_OFFSET UNITYSDK_OFFSET(0x1AD99EF0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1AD9A000)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x1AD9A8B0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_1_OFFSET UNITYSDK_OFFSET(0x1AD9AA20)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_2_OFFSET UNITYSDK_OFFSET(0x1AD9B740)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x1AD9AA10)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CONTAINSCOLUMN_OFFSET UNITYSDK_OFFSET(0x1AD9A940)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD97E70)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AD9C0C0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_FINDPARENTRELATION_OFFSET UNITYSDK_OFFSET(0x1AD9C290)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AD9C260)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_ACCEPTREJECTRULE_OFFSET UNITYSDK_OFFSET(0x1AD9A8C0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_CHILDCOLUMNNAMES_OFFSET UNITYSDK_OFFSET(0x1AD981F0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_CHILDKEY_OFFSET UNITYSDK_OFFSET(0x1AD98150)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1AD98170)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_DELETERULE_OFFSET UNITYSDK_OFFSET(0x1AD9C040)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_PARENTCOLUMNNAMES_OFFSET UNITYSDK_OFFSET(0x1AD981E0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_PARENTKEY_OFFSET UNITYSDK_OFFSET(0x1AD99ED0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDCOLUMNSREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AD9B720)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDCOLUMNS_OFFSET UNITYSDK_OFFSET(0x1AD9C270)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDTABLE_OFFSET UNITYSDK_OFFSET(0x1AD9C3F0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x1AD98190)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_UPDATERULE_OFFSET UNITYSDK_OFFSET(0x1AD9C440)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET UNITYSDK_OFFSET(0x1AD98570)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_ISKEYNULL_OFFSET UNITYSDK_OFFSET(0x1AD98420)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_NONVIRTUALCHECKSTATE_OFFSET UNITYSDK_OFFSET(0x1AD9A570)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_ACCEPTREJECTRULE_OFFSET UNITYSDK_OFFSET(0x1AD9A8E0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_DELETERULE_OFFSET UNITYSDK_OFFSET(0x1AD9C060)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_UPDATERULE_OFFSET UNITYSDK_OFFSET(0x1AD9C460)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD97CD0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AD98040)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AD98070)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AD980A0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AD980F0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD97CC0)

namespace System::Data
{
	inline static constexpr unsigned int ForeignKeyConstraint_TypeDefinitionIndex = 36492;

	class ForeignKeyConstraint : public ::System::Data::Constraint
	{
	public:
		::System::Data::DataKey _childKey; // 0x38
		::Il2CppArray<::System::String*>* _childColumnNames; // 0x40
		::System::Data::DataKey _parentKey; // 0x48
		::Il2CppArray<::System::String*>* _parentColumnNames; // 0x50
		::System::String* _parentTableNamespace; // 0x58
		::System::String* _parentTableName; // 0x60
		::System::String* _constraintName; // 0x68
		::System::Data::Rule _deleteRule; // 0x70
		::System::Data::AcceptRejectRule _acceptRejectRule; // 0x74
		::System::Data::Rule _updateRule; // 0x78

		::System::Void _ctor(::System::Data::DataColumn* parentColumn, ::System::Data::DataColumn* childColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_OFFSET))(this, parentColumn, childColumn);
		}

		::System::Void _ctor_1(::System::String* constraintName, ::System::Data::DataColumn* parentColumn, ::System::Data::DataColumn* childColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataColumn*, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_1_OFFSET))(this, constraintName, parentColumn, childColumn);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Data::DataColumn*>* parentColumns, ::Il2CppArray<::System::Data::DataColumn*>* childColumns)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_2_OFFSET))(this, parentColumns, childColumns);
		}

		::System::Void _ctor_3(::System::String* constraintName, ::Il2CppArray<::System::Data::DataColumn*>* parentColumns, ::Il2CppArray<::System::Data::DataColumn*>* childColumns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Data::DataColumn*>*, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_3_OFFSET))(this, constraintName, parentColumns, childColumns);
		}

		::System::Void _ctor_4(::System::String* constraintName, ::System::String* parentTableName, ::Il2CppArray<::System::String*>* parentColumnNames, ::Il2CppArray<::System::String*>* childColumnNames, ::System::Data::AcceptRejectRule acceptRejectRule, ::System::Data::Rule deleteRule, ::System::Data::Rule updateRule)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Data::AcceptRejectRule, ::System::Data::Rule, ::System::Data::Rule))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_4_OFFSET))(this, constraintName, parentTableName, parentColumnNames, childColumnNames, acceptRejectRule, deleteRule, updateRule);
		}

		::System::Void _ctor_5(::System::String* constraintName, ::System::String* parentTableName, ::System::String* parentTableNamespace, ::Il2CppArray<::System::String*>* parentColumnNames, ::Il2CppArray<::System::String*>* childColumnNames, ::System::Data::AcceptRejectRule acceptRejectRule, ::System::Data::Rule deleteRule, ::System::Data::Rule updateRule)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Data::AcceptRejectRule, ::System::Data::Rule, ::System::Data::Rule))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT__CTOR_5_OFFSET))(this, constraintName, parentTableName, parentTableNamespace, parentColumnNames, childColumnNames, acceptRejectRule, deleteRule, updateRule);
		}

		::System::Data::DataKey get_ChildKey()
		{
			return ((::System::Data::DataKey(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_CHILDKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataColumn*>* get_Columns()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_COLUMNS_OFFSET))(this);
		}

		::System::Data::DataTable* get_Table()
		{
			return ((::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_TABLE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_ParentColumnNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_PARENTCOLUMNNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_ChildColumnNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_CHILDCOLUMNNAMES_OFFSET))(this);
		}

		::System::Void CheckCanAddToCollection(::System::Data::ConstraintCollection* constraints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::ConstraintCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET))(this, constraints);
		}

		::System::Boolean CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraints, ::System::Boolean fThrowException)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::ConstraintCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET))(this, constraints, fThrowException);
		}

		::System::Boolean IsKeyNull(::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_ISKEYNULL_OFFSET))(this, values);
		}

		::System::Boolean IsConstraintViolated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET))(this);
		}

		::System::Boolean CanEnableConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CANENABLECONSTRAINT_OFFSET))(this);
		}

		::System::Void CascadeCommit(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADECOMMIT_OFFSET))(this, row);
		}

		::System::Void CascadeDelete(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEDELETE_OFFSET))(this, row);
		}

		::System::Void CascadeRollback(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEROLLBACK_OFFSET))(this, row);
		}

		::System::Void CascadeUpdate(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEUPDATE_OFFSET))(this, row);
		}

		::System::Void CheckCanClearParentTable(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANCLEARPARENTTABLE_OFFSET))(this, table);
		}

		::System::Void CheckCanRemoveParentRow(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANREMOVEPARENTROW_OFFSET))(this, row);
		}

		::System::Void CheckCascade(::System::Data::DataRow* row, ::System::Data::DataRowAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCASCADE_OFFSET))(this, row, action);
		}

		::System::Void CheckConstraint(::System::Data::DataRow* childRow, ::System::Data::DataRowAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCONSTRAINT_OFFSET))(this, childRow, action);
		}

		::System::Void NonVirtualCheckState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_NONVIRTUALCHECKSTATE_OFFSET))(this);
		}

		::System::Void CheckState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKSTATE_OFFSET))(this);
		}

		::System::Data::AcceptRejectRule get_AcceptRejectRule()
		{
			return ((::System::Data::AcceptRejectRule(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_ACCEPTREJECTRULE_OFFSET))(this);
		}

		::System::Void set_AcceptRejectRule(::System::Data::AcceptRejectRule value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::AcceptRejectRule))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_ACCEPTREJECTRULE_OFFSET))(this, value);
		}

		::System::Boolean ContainsColumn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CONTAINSCOLUMN_OFFSET))(this, column);
		}

		::System::Data::Constraint* Clone(::System::Data::DataSet* destination)
		{
			return ((::System::Data::Constraint*(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_OFFSET))(this, destination);
		}

		::System::Data::Constraint* Clone_1(::System::Data::DataSet* destination, ::System::Boolean ignorNSforTableLookup)
		{
			return ((::System::Data::Constraint*(*)(::PVOID, ::System::Data::DataSet*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_1_OFFSET))(this, destination, ignorNSforTableLookup);
		}

		::System::Data::ForeignKeyConstraint* Clone_2(::System::Data::DataTable* destination)
		{
			return ((::System::Data::ForeignKeyConstraint*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_2_OFFSET))(this, destination);
		}

		::System::Void Create(::System::String* relationName, ::Il2CppArray<::System::Data::DataColumn*>* parentColumns, ::Il2CppArray<::System::Data::DataColumn*>* childColumns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Data::DataColumn*>*, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CREATE_OFFSET))(this, relationName, parentColumns, childColumns);
		}

		::System::Data::Rule get_DeleteRule()
		{
			return ((::System::Data::Rule(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_DELETERULE_OFFSET))(this);
		}

		::System::Void set_DeleteRule(::System::Data::Rule value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::Rule))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_DELETERULE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_EQUALS_OFFSET))(this, key);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GETHASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataColumn*>* get_RelatedColumns()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDCOLUMNS_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataColumn*>* get_RelatedColumnsReference()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDCOLUMNSREFERENCE_OFFSET))(this);
		}

		::System::Data::DataKey get_ParentKey()
		{
			return ((::System::Data::DataKey(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_PARENTKEY_OFFSET))(this);
		}

		::System::Data::DataRelation* FindParentRelation()
		{
			return ((::System::Data::DataRelation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_FINDPARENTRELATION_OFFSET))(this);
		}

		::System::Data::DataTable* get_RelatedTable()
		{
			return ((::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDTABLE_OFFSET))(this);
		}

		::System::Data::Rule get_UpdateRule()
		{
			return ((::System::Data::Rule(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_UPDATERULE_OFFSET))(this);
		}

		::System::Void set_UpdateRule(::System::Data::Rule value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::Rule))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_UPDATERULE_OFFSET))(this, value);
		}
	};
}
