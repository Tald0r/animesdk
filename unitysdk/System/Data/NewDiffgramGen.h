#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_DATA_NEWDIFFGRAMGEN_CREATETABLEHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1A140260)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_DOASSIGNMENTS_OFFSET UNITYSDK_OFFSET(0x1A13FDF0)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_EMPTYDATA_OFFSET UNITYSDK_OFFSET(0x1A140650)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATECOLUMN_OFFSET UNITYSDK_OFFSET(0x1A142400)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATEROW_OFFSET UNITYSDK_OFFSET(0x1A141B90)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATETABLEERRORS_OFFSET UNITYSDK_OFFSET(0x1A141020)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATETABLE_OFFSET UNITYSDK_OFFSET(0x1A140FA0)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1A142D30)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_SAVE_1_OFFSET UNITYSDK_OFFSET(0x1A140760)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_SAVE_OFFSET UNITYSDK_OFFSET(0x1A140750)
#define SYSTEM_DATA_NEWDIFFGRAMGEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A140170)
#define SYSTEM_DATA_NEWDIFFGRAMGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13FCA0)

namespace System::Data
{
	inline static constexpr unsigned int NewDiffgramGen_TypeDefinitionIndex = 35523;

	class NewDiffgramGen : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* _tables; // 0x10
		::System::Xml::XmlWriter* _xmlw; // 0x18
		::System::Data::DataTable* _dt; // 0x20
		::System::Xml::XmlDocument* _doc; // 0x28
		::System::Collections::Hashtable* _rowsOrder; // 0x30
		::System::Data::DataSet* _ds; // 0x38
		::System::Boolean _fErrors; // 0x40
		::System::Boolean _writeHierarchy; // 0x41
		::System::Boolean _fBefore; // 0x42

		::System::Void _ctor(::System::Data::DataSet* ds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN__CTOR_OFFSET))(this, ds);
		}

		::System::Void _ctor_1(::System::Data::DataTable* dt, ::System::Boolean writeHierarchy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN__CTOR_1_OFFSET))(this, dt, writeHierarchy);
		}

		::System::Void CreateTableHierarchy(::System::Data::DataTable* dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_CREATETABLEHIERARCHY_OFFSET))(this, dt);
		}

		::System::Void DoAssignments(::System::Collections::ArrayList* tables)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_DOASSIGNMENTS_OFFSET))(this, tables);
		}

		::System::Boolean EmptyData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_EMPTYDATA_OFFSET))(this);
		}

		::System::Void Save(::System::Xml::XmlWriter* xmlw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_SAVE_OFFSET))(this, xmlw);
		}

		::System::Void Save_1(::System::Xml::XmlWriter* xmlw, ::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_SAVE_1_OFFSET))(this, xmlw, table);
		}

		::System::Void GenerateTable(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATETABLE_OFFSET))(this, table);
		}

		::System::Void GenerateTableErrors(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATETABLEERRORS_OFFSET))(this, table);
		}

		::System::Void GenerateRow(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATEROW_OFFSET))(this, row);
		}

		::System::Void GenerateColumn(::System::Data::DataRow* row, ::System::Data::DataColumn* col, ::System::Data::DataRowVersion version)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATECOLUMN_OFFSET))(this, row, col, version);
		}

		static ::System::String* QualifiedName(::System::String* prefix, ::System::String* name)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_QUALIFIEDNAME_OFFSET))(prefix, name);
		}
	};
}
