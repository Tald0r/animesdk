#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_EF8B5663C322B21D_METHOD_3_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0xAB28BF0)
#define CLASS_3_EF8B5663C322B21D_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xAB28800)
#define CLASS_3_EF8B5663C322B21D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB29510)
#define CLASS_3_EF8B5663C322B21D__CTOR_OFFSET UNITYSDK_OFFSET(0xAB292F0)

inline static constexpr unsigned int Class_3_EF8B5663C322B21D_TypeDefinitionIndex = 47994;

class Class_3_EF8B5663C322B21D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_4; // 0x20
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_5; // 0x28
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x30
	::Class_3_B537A0AA78803363* Field_3_6; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x40
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8B5663C322B21D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8B5663C322B21D_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_29CA7C76C5D57032(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_EF8B5663C322B21D_METHOD_3_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8B5663C322B21D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
