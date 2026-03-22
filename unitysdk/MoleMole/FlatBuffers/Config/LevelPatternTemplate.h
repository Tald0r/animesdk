#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_744.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1227A5E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_ACTIVEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x122779E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1UNACTIVEDOOR_OFFSET UNITYSDK_OFFSET(0x12277D60)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE1_OFFSET UNITYSDK_OFFSET(0x12277FC0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE2_OFFSET UNITYSDK_OFFSET(0x12278130)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1WAVE3_OFFSET UNITYSDK_OFFSET(0x122782A0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA1_OFFSET UNITYSDK_OFFSET(0x12277C40)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2UNACTIVEDOOR_OFFSET UNITYSDK_OFFSET(0x12278530)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE1_OFFSET UNITYSDK_OFFSET(0x12278790)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE2_OFFSET UNITYSDK_OFFSET(0x12278900)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2WAVE3_OFFSET UNITYSDK_OFFSET(0x12278A70)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA2_OFFSET UNITYSDK_OFFSET(0x12278410)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE1_OFFSET UNITYSDK_OFFSET(0x12278D00)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE2_OFFSET UNITYSDK_OFFSET(0x12278E70)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3WAVE3_OFFSET UNITYSDK_OFFSET(0x12278FE0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_AREA3_OFFSET UNITYSDK_OFFSET(0x12278BE0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_BORNPOS_OFFSET UNITYSDK_OFFSET(0x12279150)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_DEFAULTDOOR_OFFSET UNITYSDK_OFFSET(0x12279270)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP1RANDOM_OFFSET UNITYSDK_OFFSET(0x122794D0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP2RANDOM_OFFSET UNITYSDK_OFFSET(0x12279640)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_GROUP3RANDOM_OFFSET UNITYSDK_OFFSET(0x122797B0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_IMMEDIATEFIGHT_OFFSET UNITYSDK_OFFSET(0x12279920)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x12277840)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x12277870)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x12279A40)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP1_OFFSET UNITYSDK_OFFSET(0x12279B60)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP2_OFFSET UNITYSDK_OFFSET(0x12279DC0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_TRAPGROUP3_OFFSET UNITYSDK_OFFSET(0x1227A020)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_GET_UNACTIVEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x1227A280)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_LOADANDCHECK_OFFSET UNITYSDK_OFFSET(0x1227A4E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE_SET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x12277850)
#define MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12277860)

namespace MoleMole::FlatBuffers::Config
{
	inline static constexpr unsigned int LevelPatternTemplate_TypeDefinitionIndex = 16293;

	class LevelPatternTemplate : public ::System::Object
	{
	public:
		// static const ::System::String* Hash; // 0x0
		// static const ::System::Byte VAR_MAX_COUNT = 0x1B; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* m_DefaultDoor; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* m_TrapGroup3; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* m_TrapGroup1; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* m_TrapGroup2; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* m_ActiveDynamicObject; // 0x30
		::System::String* m_Area3; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* m_UnactiveDynamicObject; // 0x40
		::Struct_2_3E75877A2888D88A_744 m_Data; // 0x48
		::System::String* m_Area2; // 0x58
		::System::String* m_BornPos; // 0x60
		::System::String* m_Area1; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* m_Area2UnactiveDoor; // 0x70
		::Class_0_16E4307DCC419505_13* m_Notify; // 0x78
		::System::String* m_StageName; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* m_Area1UnactiveDoor; // 0x88
		::System::Int32 m_Area1Wave2; // 0x90
		::System::Byte m_Mask3; // 0x94
		::System::Byte m_Mask0; // 0x95
		::System::Boolean m_ImmediateFight; // 0x96
		::System::Byte m_Mask2; // 0x97
		::System::Int32 m_Group1Random; // 0x98
		::System::Int32 m_Group3Random; // 0x9C
		::System::Int32 m_LevelID; // 0xA0
		::System::Int32 m_Area2Wave3; // 0xA4
		::System::Int32 m_Area3Wave2; // 0xA8
		::System::Int32 m_Area3Wave1; // 0xAC
		::System::Int32 m_Area2Wave2; // 0xB0
		::System::Byte m_VarLoadedCount; // 0xB4
		::System::Byte m_Mask1; // 0xB5
		::System::Boolean _IsLoadAll_k__BackingField; // 0xB6
		::System::Int32 m_Area1Wave3; // 0xB8
		::System::Int32 m_Area3Wave3; // 0xBC
		::System::Int32 m_Group2Random; // 0xC0
		::System::Int32 m_Area1Wave1; // 0xC4
		::System::Int32 m_Area2Wave1; // 0xC8

		::System::Void _ctor(::Struct_2_3E75877A2888D88A_744 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_744, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_LEVELPATTERNTEMPLATE__CTOR_OFFSET))(this, data, notify);
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
