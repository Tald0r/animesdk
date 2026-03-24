#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_C428DEB5A4536E5E_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6F79F60)
#define CLASS_3_C428DEB5A4536E5E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6F7A3B0)
#define CLASS_3_C428DEB5A4536E5E_METHOD_3_CD85CA27A9EDD188_OFFSET UNITYSDK_OFFSET(0x6F7A140)
#define CLASS_3_C428DEB5A4536E5E__CTOR_OFFSET UNITYSDK_OFFSET(0x6F7A290)

inline static constexpr unsigned int Class_3_C428DEB5A4536E5E_TypeDefinitionIndex = 46242;

class Class_3_C428DEB5A4536E5E : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C428DEB5A4536E5E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C428DEB5A4536E5E_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_CD85CA27A9EDD188(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_C428DEB5A4536E5E_METHOD_3_CD85CA27A9EDD188_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C428DEB5A4536E5E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
