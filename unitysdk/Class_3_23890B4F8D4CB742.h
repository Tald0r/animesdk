#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_23890B4F8D4CB742_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA202EA0)
#define CLASS_3_23890B4F8D4CB742_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA2034D0)
#define CLASS_3_23890B4F8D4CB742_METHOD_3_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0xA203100)
#define CLASS_3_23890B4F8D4CB742__CTOR_OFFSET UNITYSDK_OFFSET(0xA203370)

inline static constexpr unsigned int Class_3_23890B4F8D4CB742_TypeDefinitionIndex = 37069;

class Class_3_23890B4F8D4CB742 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_AF61EEC11F34483C<::UnityEngine::Vector3>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23890B4F8D4CB742__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23890B4F8D4CB742_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_CCC6A3002C391211(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_23890B4F8D4CB742_METHOD_3_CCC6A3002C391211_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23890B4F8D4CB742_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
