#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKBANKMANAGER_BANKHANDLE_DECREF_OFFSET UNITYSDK_OFFSET(0x1AE01790)
#define AKBANKMANAGER_BANKHANDLE_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1AE00EA0)
#define AKBANKMANAGER_BANKHANDLE_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE00E80)
#define AKBANKMANAGER_BANKHANDLE_INCREF_OFFSET UNITYSDK_OFFSET(0x1AE014C0)
#define AKBANKMANAGER_BANKHANDLE_LOADBANK_OFFSET UNITYSDK_OFFSET(0x1AE00F60)
#define AKBANKMANAGER_BANKHANDLE_LOGLOADRESULT_OFFSET UNITYSDK_OFFSET(0x1AE010B0)
#define AKBANKMANAGER_BANKHANDLE_SET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE00E90)
#define AKBANKMANAGER_BANKHANDLE_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0x1AE01550)
#define AKBANKMANAGER_BANKHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE00E70)

inline static constexpr unsigned int AkBankManager_BankHandle_TypeDefinitionIndex = 30011;

class AkBankManager_BankHandle : public ::System::Object
{
public:
	::System::String* bankName; // 0x10
	::System::Int32 _RefCount_k__BackingField; // 0x18
	::System::UInt32 m_BankID; // 0x1C

	::System::Void _ctor(::System::String* name)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE__CTOR_OFFSET))(this, name);
	}

	::System::Int32 get_RefCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE_GET_REFCOUNT_OFFSET))(this);
	}

	::System::Void set_RefCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE_SET_REFCOUNT_OFFSET))(this, value);
	}

	::AKRESULT DoLoadBank()
	{
		return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE_DOLOADBANK_OFFSET))(this);
	}

	::System::Void LoadBank()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE_LOADBANK_OFFSET))(this);
	}

	::System::Void UnloadBank()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE_UNLOADBANK_OFFSET))(this);
	}

	::System::Void IncRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE_INCREF_OFFSET))(this);
	}

	::System::Void DecRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE_DECREF_OFFSET))(this);
	}

	::System::Void LogLoadResult(::AKRESULT result)
	{
		return ((::System::Void(*)(::PVOID, ::AKRESULT))((::PBYTE)hIl2Cpp + AKBANKMANAGER_BANKHANDLE_LOGLOADRESULT_OFFSET))(this, result);
	}
};
