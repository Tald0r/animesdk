#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_4.h"
#include "unitysdk/System/Object.h"

class Class_1_8B664C71B784890D;
class Class_2_8F61B9A09E64A3EA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNOWLEDGEDATA_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x8B56B10)
#define KNOWLEDGEDATA_GETCURPROGRESS_OFFSET UNITYSDK_OFFSET(0x8B56C00)
#define KNOWLEDGEDATA_GETMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x8B56D80)
#define KNOWLEDGEDATA_GETREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x8B56E00)
#define KNOWLEDGEDATA_GETREWARDS_OFFSET UNITYSDK_OFFSET(0x8B56D10)
#define KNOWLEDGEDATA_GET_QUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x8B56AB0)
#define KNOWLEDGEDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x8B56A90)
#define KNOWLEDGEDATA_GET_SERVERINFO_OFFSET UNITYSDK_OFFSET(0x8B56820)
#define KNOWLEDGEDATA_ISRED_OFFSET UNITYSDK_OFFSET(0x8B56EA0)
#define KNOWLEDGEDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x8B56AA0)
#define KNOWLEDGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8B56AC0)

inline static constexpr unsigned int KnowledgeData_TypeDefinitionIndex = 76179;

class KnowledgeData : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KnowledgeData*>* childQuest; // 0x10
	::Class_2_8F61B9A09E64A3EA* _QuestConfig_k__BackingField; // 0x18
	::System::Int32 _QuestID_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 configID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA__CTOR_OFFSET))(this, configID);
	}

	::Class_1_8B664C71B784890D* get_ServerInfo()
	{
		return ((::Class_1_8B664C71B784890D*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_SERVERINFO_OFFSET))(this);
	}

	::System::Int32 get_QuestID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_QUESTID_OFFSET))(this);
	}

	::System::Void set_QuestID(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_SET_QUESTID_OFFSET))(this, value);
	}

	::Class_2_8F61B9A09E64A3EA* get_QuestConfig()
	{
		return ((::Class_2_8F61B9A09E64A3EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_QUESTCONFIG_OFFSET))(this);
	}

	::System::Void AddChild(::KnowledgeData* data)
	{
		return ((::System::Void(*)(::PVOID, ::KnowledgeData*))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_ADDCHILD_OFFSET))(this, data);
	}

	::System::Int32 GetCurProgress()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETCURPROGRESS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* GetRewards()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETREWARDS_OFFSET))(this);
	}

	::System::Int32 GetMaxProgress()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETMAXPROGRESS_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_4 GetRewardState()
	{
		return ((::Enum_3_4608E37A1B3D374A_4(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETREWARDSTATE_OFFSET))(this);
	}

	::System::Boolean IsRed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_ISRED_OFFSET))(this);
	}
};
