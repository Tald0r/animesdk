#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_C9E7D642B4791DA7_METHOD_3_322C2E00AFECAB74_OFFSET UNITYSDK_OFFSET(0xA8FB890)
#define CLASS_3_C9E7D642B4791DA7_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA8FB7D0)
#define CLASS_3_C9E7D642B4791DA7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA8FBB80)
#define CLASS_3_C9E7D642B4791DA7__CTOR_OFFSET UNITYSDK_OFFSET(0xA8FBAE0)

inline static constexpr unsigned int Class_3_C9E7D642B4791DA7_TypeDefinitionIndex = 67469;

class Class_3_C9E7D642B4791DA7 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::MoleMole::EntityHandle>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9E7D642B4791DA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9E7D642B4791DA7_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_322C2E00AFECAB74(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_C9E7D642B4791DA7_METHOD_3_322C2E00AFECAB74_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9E7D642B4791DA7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
