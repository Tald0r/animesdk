#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_708.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1639B380)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_ACTIVEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x16398780)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1UNACTIVEDOOR_OFFSET UNITYSDK_OFFSET(0x16398B00)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE1_OFFSET UNITYSDK_OFFSET(0x16398D60)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE2_OFFSET UNITYSDK_OFFSET(0x16398ED0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE3_OFFSET UNITYSDK_OFFSET(0x16399040)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1_OFFSET UNITYSDK_OFFSET(0x163989E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2UNACTIVEDOOR_OFFSET UNITYSDK_OFFSET(0x163992D0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE1_OFFSET UNITYSDK_OFFSET(0x16399530)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE2_OFFSET UNITYSDK_OFFSET(0x163996A0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE3_OFFSET UNITYSDK_OFFSET(0x16399810)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2_OFFSET UNITYSDK_OFFSET(0x163991B0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE1_OFFSET UNITYSDK_OFFSET(0x16399AA0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE2_OFFSET UNITYSDK_OFFSET(0x16399C10)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE3_OFFSET UNITYSDK_OFFSET(0x16399D80)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3_OFFSET UNITYSDK_OFFSET(0x16399980)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_BORNPOS_OFFSET UNITYSDK_OFFSET(0x16399EF0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_DEFAULTDOOR_OFFSET UNITYSDK_OFFSET(0x1639A010)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP1RANDOM_OFFSET UNITYSDK_OFFSET(0x1639A270)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP2RANDOM_OFFSET UNITYSDK_OFFSET(0x1639A3E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP3RANDOM_OFFSET UNITYSDK_OFFSET(0x1639A550)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_IMMEDIATEFIGHT_OFFSET UNITYSDK_OFFSET(0x1639A6C0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x163985E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x16398610)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1639A7E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP1_OFFSET UNITYSDK_OFFSET(0x1639A900)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP2_OFFSET UNITYSDK_OFFSET(0x1639AB60)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP3_OFFSET UNITYSDK_OFFSET(0x1639ADC0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_UNACTIVEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x1639B020)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_LOADANDCHECK_OFFSET UNITYSDK_OFFSET(0x1639B280)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_SET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x163985F0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16398600)

namespace MoleMole::FlatBuffers::Config
{
	inline static constexpr unsigned int LevelPatternTemplate_TypeDefinitionIndex = 17062;

	class LevelPatternTemplate : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* m_TrapGroup3; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* m_TrapGroup2; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* m_ActiveDynamicObject; // 0x20
		::System::String* m_BornPos; // 0x28
		::Class_0_16E4307DCC419505_13* m_Notify; // 0x30
		::Struct_2_3E75877A2888D88A_708 m_Data; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* m_DefaultDoor; // 0x48
		::System::String* m_Area1; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* m_Area2UnactiveDoor; // 0x58
		::System::String* m_Area3; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* m_UnactiveDynamicObject; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* m_Area1UnactiveDoor; // 0x70
		::System::String* m_Area2; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* m_TrapGroup1; // 0x80
		::System::String* m_StageName; // 0x88
		::System::Int32 m_LevelID; // 0x90
		::System::Int32 m_Area2Wave1; // 0x94
		::System::Int32 m_Area2Wave2; // 0x98
		::System::Int32 m_Area1Wave1; // 0x9C
		::System::Int32 m_Area3Wave1; // 0xA0
		::System::Int32 m_Area3Wave3; // 0xA4
		::System::Byte m_VarLoadedCount; // 0xA8
		::System::Boolean _IsLoadAll_k__BackingField; // 0xA9
		::System::Byte m_Mask0; // 0xAA
		::System::Byte m_Mask3; // 0xAB
		::System::Int32 m_Area3Wave2; // 0xAC
		::System::Int32 m_Area2Wave3; // 0xB0
		::System::Int32 m_Group2Random; // 0xB4
		::System::Boolean m_ImmediateFight; // 0xB8
		::System::Byte m_Mask1; // 0xB9
		::System::Byte m_Mask2; // 0xBA
		::System::Int32 m_Area1Wave3; // 0xBC
		::System::Int32 m_Area1Wave2; // 0xC0
		::System::Int32 m_Group3Random; // 0xC4
		::System::Int32 m_Group1Random; // 0xC8

		::System::Void _ctor(::Struct_2_3E75877A2888D88A_708 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_708, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean get_IsLoadAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_ISLOADALL_OFFSET))(this);
		}

		::System::Void set_IsLoadAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_SET_ISLOADALL_OFFSET))(this, value);
		}

		::System::Int32 get_LevelID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_LEVELID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_ActiveDynamicObject()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_ACTIVEDYNAMICOBJECT_OFFSET))(this);
		}

		::System::String* get_Area1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_Area1UnactiveDoor()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1UNACTIVEDOOR_OFFSET))(this);
		}

		::System::Int32 get_Area1Wave1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE1_OFFSET))(this);
		}

		::System::Int32 get_Area1Wave2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE2_OFFSET))(this);
		}

		::System::Int32 get_Area1Wave3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE3_OFFSET))(this);
		}

		::System::String* get_Area2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_Area2UnactiveDoor()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2UNACTIVEDOOR_OFFSET))(this);
		}

		::System::Int32 get_Area2Wave1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE1_OFFSET))(this);
		}

		::System::Int32 get_Area2Wave2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE2_OFFSET))(this);
		}

		::System::Int32 get_Area2Wave3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE3_OFFSET))(this);
		}

		::System::String* get_Area3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3_OFFSET))(this);
		}

		::System::Int32 get_Area3Wave1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE1_OFFSET))(this);
		}

		::System::Int32 get_Area3Wave2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE2_OFFSET))(this);
		}

		::System::Int32 get_Area3Wave3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE3_OFFSET))(this);
		}

		::System::String* get_BornPos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_BORNPOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_DefaultDoor()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_DEFAULTDOOR_OFFSET))(this);
		}

		::System::Int32 get_Group1Random()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP1RANDOM_OFFSET))(this);
		}

		::System::Int32 get_Group2Random()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP2RANDOM_OFFSET))(this);
		}

		::System::Int32 get_Group3Random()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP3RANDOM_OFFSET))(this);
		}

		::System::Boolean get_ImmediateFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_IMMEDIATEFIGHT_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_TrapGroup1()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_TrapGroup2()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP2_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_TrapGroup3()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP3_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_UnactiveDynamicObject()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_UNACTIVEDYNAMICOBJECT_OFFSET))(this);
		}

		::System::Void LoadAndCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_LOADANDCHECK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_CLEAR_OFFSET))(this);
		}
	};
}
