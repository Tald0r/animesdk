#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_2326BD621D0A3529_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xD7494A0)
#define CLASS_3_2326BD621D0A3529_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0xD749810)
#define CLASS_3_2326BD621D0A3529_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD749DB0)
#define CLASS_3_2326BD621D0A3529_METHOD_3_E5BCB69F266CDEF4_OFFSET UNITYSDK_OFFSET(0xD7498A0)
#define CLASS_3_2326BD621D0A3529__CTOR_OFFSET UNITYSDK_OFFSET(0xD749BD0)

inline static constexpr unsigned int Class_3_2326BD621D0A3529_TypeDefinitionIndex = 65154;

class Class_3_2326BD621D0A3529 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x18
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x20
	::Class_4_179456445C225AB4<::System::Single>* Field_3_4; // 0x28
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x30
	::Class_3_B537A0AA78803363* Field_3_5; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2326BD621D0A3529__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2326BD621D0A3529_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_2326BD621D0A3529_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2326BD621D0A3529_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_E5BCB69F266CDEF4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_2326BD621D0A3529_METHOD_3_E5BCB69F266CDEF4_OFFSET))(this, a1);
	}
};
