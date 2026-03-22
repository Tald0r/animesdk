#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_2CC9B2DCDB307A0C_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x6D22BA0)
#define CLASS_3_2CC9B2DCDB307A0C_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x6D23120)
#define CLASS_3_2CC9B2DCDB307A0C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6D239E0)
#define CLASS_3_2CC9B2DCDB307A0C__CTOR_OFFSET UNITYSDK_OFFSET(0x6D23710)

inline static constexpr unsigned int Class_3_2CC9B2DCDB307A0C_TypeDefinitionIndex = 75287;

class Class_3_2CC9B2DCDB307A0C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_6; // 0x18
	::Class_4_AF61EEC11F34483C<::System::String*>* Field_3_7; // 0x20
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x28
	::Class_4_AF61EEC11F34483C<::System::Single>* Field_3_8; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_4; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x40
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x48
	::Class_3_B537A0AA78803363* Field_3_9; // 0x50
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x58
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC9B2DCDB307A0C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC9B2DCDB307A0C_METHOD_3_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_2CC9B2DCDB307A0C_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC9B2DCDB307A0C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
