#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_BDD0B50117F973AF_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x91ACD00)
#define CLASS_3_BDD0B50117F973AF_METHOD_3_22A2A5FFC03C7093_OFFSET UNITYSDK_OFFSET(0x91AD070)
#define CLASS_3_BDD0B50117F973AF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91ADD60)
#define CLASS_3_BDD0B50117F973AF__CTOR_OFFSET UNITYSDK_OFFSET(0x91ADAB0)

inline static constexpr unsigned int Class_3_BDD0B50117F973AF_TypeDefinitionIndex = 66085;

class Class_3_BDD0B50117F973AF : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_3_B537A0AA78803363* Field_3_5; // 0x30
	::Class_3_B537A0AA78803363* Field_3_4; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDD0B50117F973AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDD0B50117F973AF_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_22A2A5FFC03C7093(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_BDD0B50117F973AF_METHOD_3_22A2A5FFC03C7093_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDD0B50117F973AF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
