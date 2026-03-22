#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_C9E7D642B4791DA7_METHOD_3_322C2E00AFECAB74_OFFSET UNITYSDK_OFFSET(0xDEA3D00)
#define CLASS_3_C9E7D642B4791DA7_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDEA3C40)
#define CLASS_3_C9E7D642B4791DA7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDEA3FF0)
#define CLASS_3_C9E7D642B4791DA7__CTOR_OFFSET UNITYSDK_OFFSET(0xDEA3F50)

inline static constexpr unsigned int Class_3_C9E7D642B4791DA7_TypeDefinitionIndex = 61184;

class Class_3_C9E7D642B4791DA7 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_3_0; // 0x18

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
