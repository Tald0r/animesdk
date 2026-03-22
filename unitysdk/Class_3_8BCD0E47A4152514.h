#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_8BCD0E47A4152514_METHOD_3_1EDDF6D2F22116E8_OFFSET UNITYSDK_OFFSET(0x7F91FF0)
#define CLASS_3_8BCD0E47A4152514_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x7F91D90)
#define CLASS_3_8BCD0E47A4152514_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7F92520)
#define CLASS_3_8BCD0E47A4152514__CTOR_OFFSET UNITYSDK_OFFSET(0x7F923C0)

inline static constexpr unsigned int Class_3_8BCD0E47A4152514_TypeDefinitionIndex = 51272;

class Class_3_8BCD0E47A4152514 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_2; // 0x20
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_0; // 0x28
	::Class_4_AF61EEC11F34483C<::UnityEngine::Vector3>* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BCD0E47A4152514__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BCD0E47A4152514_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_1EDDF6D2F22116E8(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_8BCD0E47A4152514_METHOD_3_1EDDF6D2F22116E8_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BCD0E47A4152514_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
