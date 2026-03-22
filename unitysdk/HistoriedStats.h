#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HISTORIEDSTATS_ADD_OFFSET UNITYSDK_OFFSET(0x9155C70)
#define HISTORIEDSTATS_GET_MAX_OFFSET UNITYSDK_OFFSET(0x9155EC0)
#define HISTORIEDSTATS_GET_MEAN_OFFSET UNITYSDK_OFFSET(0x9155EA0)
#define HISTORIEDSTATS_GET_MIN_OFFSET UNITYSDK_OFFSET(0x9155EE0)
#define HISTORIEDSTATS_RECALCIFDIRTY_OFFSET UNITYSDK_OFFSET(0x9155D30)
#define HISTORIEDSTATS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9155F00)
#define HISTORIEDSTATS__CTOR_OFFSET UNITYSDK_OFFSET(0x9155C20)
#define HISTORIEDSTATS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9156030)

inline static constexpr unsigned int HistoriedStats_TypeDefinitionIndex = 69933;

class HistoriedStats : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* m_History; // 0x10
	::System::Boolean m_Ready; // 0x18
	::System::Single m_InvLength; // 0x1C
	::System::Int32 m_LastIndex; // 0x20
	::System::Single m_Max; // 0x24
	::System::Single m_Min; // 0x28
	::System::Single m_Mean; // 0x2C

	::System::Void _ctor(::System::UInt32 historyLength)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HISTORIEDSTATS__CTOR_OFFSET))(this, historyLength);
	}

	::System::Void Add(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_ADD_OFFSET))(this, value);
	}

	::System::Void ReCalcIfDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_RECALCIFDIRTY_OFFSET))(this);
	}

	::System::Single get_Mean()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_GET_MEAN_OFFSET))(this);
	}

	::System::Single get_Max()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_GET_MAX_OFFSET))(this);
	}

	::System::Single get_Min()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_GET_MIN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS___BASE_TOSTRING_OFFSET))(this);
	}
};
