#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2735E07D504475D_1.h"

class Class_1_5F817449EE3DD0C4;
class Class_2_18804FF7C23FF19F;
namespace System { class Type; }

#define CLASS_2_2F23387128C3B493_METHOD_2_00855C4495551A88_OFFSET UNITYSDK_OFFSET(0x92C1C30)
#define CLASS_2_2F23387128C3B493_METHOD_2_1470AED6F2704975_OFFSET UNITYSDK_OFFSET(0x92C33C0)
#define CLASS_2_2F23387128C3B493_METHOD_2_E3FFC49679E23EF8_OFFSET UNITYSDK_OFFSET(0x92C1E50)
#define CLASS_2_2F23387128C3B493__CCTOR_OFFSET UNITYSDK_OFFSET(0x92C1F10)
#define CLASS_2_2F23387128C3B493__CTOR_OFFSET UNITYSDK_OFFSET(0x92C1F00)

inline static constexpr unsigned int Class_2_2F23387128C3B493_TypeDefinitionIndex = 74884;

class Class_2_2F23387128C3B493 : public ::Class_1_C2735E07D504475D_1
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F23387128C3B493_TypeDefinitionIndex)->GetStaticField(0x3CF50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F23387128C3B493__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2F23387128C3B493__CCTOR_OFFSET))();
	}

	::Class_2_18804FF7C23FF19F* Method_2_00855C4495551A88(::Class_1_5F817449EE3DD0C4* a1)
	{
		return ((::Class_2_18804FF7C23FF19F*(*)(::PVOID, ::Class_1_5F817449EE3DD0C4*))((::PBYTE)hIl2Cpp + CLASS_2_2F23387128C3B493_METHOD_2_00855C4495551A88_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Type*>* Method_2_E3FFC49679E23EF8()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F23387128C3B493_METHOD_2_E3FFC49679E23EF8_OFFSET))(this);
	}

	::Class_1_5F817449EE3DD0C4* Method_2_1470AED6F2704975()
	{
		return ((::Class_1_5F817449EE3DD0C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F23387128C3B493_METHOD_2_1470AED6F2704975_OFFSET))(this);
	}
};
