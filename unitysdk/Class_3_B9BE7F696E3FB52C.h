#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_B9BE7F696E3FB52C_METHOD_3_03377509F8FB607D_OFFSET UNITYSDK_OFFSET(0xB9F4030)
#define CLASS_3_B9BE7F696E3FB52C_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB9F3DD0)
#define CLASS_3_B9BE7F696E3FB52C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9F4340)
#define CLASS_3_B9BE7F696E3FB52C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F41E0)

inline static constexpr unsigned int Class_3_B9BE7F696E3FB52C_TypeDefinitionIndex = 65863;

class Class_3_B9BE7F696E3FB52C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_0; // 0x18
	::Class_4_AF61EEC11F34483C<::System::Single>* Field_3_2; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Single>* Field_3_3; // 0x28
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9BE7F696E3FB52C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9BE7F696E3FB52C_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_03377509F8FB607D(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_B9BE7F696E3FB52C_METHOD_3_03377509F8FB607D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9BE7F696E3FB52C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
