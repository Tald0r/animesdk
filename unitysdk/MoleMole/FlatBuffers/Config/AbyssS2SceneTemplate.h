#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1747CA00)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA1_OFFSET UNITYSDK_OFFSET(0x1747AFE0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA2_OFFSET UNITYSDK_OFFSET(0x1747B100)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA3_OFFSET UNITYSDK_OFFSET(0x1747B220)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_BORNPOS_OFFSET UNITYSDK_OFFSET(0x1747B340)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_CORRESPONDAREANUM_OFFSET UNITYSDK_OFFSET(0x1747B460)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1747AE70)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1747AE40)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA1CLEAREDDOORUNACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1747B5D0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA2CLEAREDDOORUNACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1747B830)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA3CLEAREDDOORUNACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1747BA90)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDOORACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1747BCF0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDYNAMICOBJECTACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1747BF50)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDYNAMICOBJECTUNACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1747C1B0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_SCENETAGLIST_OFFSET UNITYSDK_OFFSET(0x1747C410)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1747C670)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1747C790)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_LOADANDCHECK_OFFSET UNITYSDK_OFFSET(0x1747C900)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_SET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1747AE50)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1747AE60)

namespace MoleMole::FlatBuffers::Config
{
	inline static constexpr unsigned int AbyssS2SceneTemplate_TypeDefinitionIndex = 15456;

	class AbyssS2SceneTemplate : public ::System::Object
	{
	public:
		// static const ::System::String* Hash; // 0x0
		// static const ::System::Byte VAR_MAX_COUNT = 0xF; // 0x0
		::System::String* m_Area2; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* m_SceneTagList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* m_OnInitDoorActivateList; // 0x20
		::System::String* m_StageName; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* m_OnInitDynamicObjectUnactivateList; // 0x30
		::Class_0_16E4307DCC419505_13* m_Notify; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* m_OnArea2ClearedDoorUnactivateList; // 0x40
		::System::String* m_BornPos; // 0x48
		::System::String* m_Area1; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* m_OnArea3ClearedDoorUnactivateList; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* m_OnArea1ClearedDoorUnactivateList; // 0x60
		::System::String* m_Area3; // 0x68
		::Struct_2_58DF5669875F2C66_4 m_Data; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* m_OnInitDynamicObjectActivateList; // 0x80
		::System::Boolean _IsLoadAll_k__BackingField; // 0x88
		::System::Byte m_VarLoadedCount; // 0x89
		::System::Byte m_Mask0; // 0x8A
		::System::Byte m_Mask1; // 0x8B
		::System::Int32 m_Weight; // 0x8C
		::System::Int32 m_CorrespondAreaNum; // 0x90
		::System::Int32 m_Index; // 0x94

		::System::Void _ctor(::Struct_2_58DF5669875F2C66_4 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_4, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean get_IsLoadAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ISLOADALL_OFFSET))(this);
		}

		::System::Void set_IsLoadAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_SET_ISLOADALL_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_INDEX_OFFSET))(this);
		}

		::System::String* get_Area1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA1_OFFSET))(this);
		}

		::System::String* get_Area2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA2_OFFSET))(this);
		}

		::System::String* get_Area3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA3_OFFSET))(this);
		}

		::System::String* get_BornPos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_BORNPOS_OFFSET))(this);
		}

		::System::Int32 get_CorrespondAreaNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_CORRESPONDAREANUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnArea1ClearedDoorUnactivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA1CLEAREDDOORUNACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnArea2ClearedDoorUnactivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA2CLEAREDDOORUNACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnArea3ClearedDoorUnactivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA3CLEAREDDOORUNACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnInitDoorActivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDOORACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnInitDynamicObjectActivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDYNAMICOBJECTACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnInitDynamicObjectUnactivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDYNAMICOBJECTUNACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_SceneTagList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_SCENETAGLIST_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Int32 get_Weight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void LoadAndCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_LOADANDCHECK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_CLEAR_OFFSET))(this);
		}
	};
}
