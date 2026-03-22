#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_4_METHOD_3_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x9F109C0)
#define CLASS_3_758F9BF6AEA6A875_4_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x9F10A30)
#define CLASS_3_758F9BF6AEA6A875_4_METHOD_3_665904E4E791279B_OFFSET UNITYSDK_OFFSET(0x9F104B0)
#define CLASS_3_758F9BF6AEA6A875_4_METHOD_3_9D57F61F5EFFCB83_OFFSET UNITYSDK_OFFSET(0x9F10780)
#define CLASS_3_758F9BF6AEA6A875_4__CTOR_OFFSET UNITYSDK_OFFSET(0x9F104A0)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_4_TypeDefinitionIndex = 46392;

class Class_3_758F9BF6AEA6A875_4 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_665904E4E791279B(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4_METHOD_3_665904E4E791279B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9D57F61F5EFFCB83(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4_METHOD_3_9D57F61F5EFFCB83_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_04DE4FBB293DFBD6(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4_METHOD_3_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};
