#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_DAE202C4FFD2C713_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0xA1F9490)
#define CLASS_3_DAE202C4FFD2C713_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0xA1FA340)
#define CLASS_3_DAE202C4FFD2C713_METHOD_3_66C5F1268DD8D2FC_OFFSET UNITYSDK_OFFSET(0xA1F9A10)
#define CLASS_3_DAE202C4FFD2C713_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA1FA720)
#define CLASS_3_DAE202C4FFD2C713__CTOR_OFFSET UNITYSDK_OFFSET(0xA1FA380)

inline static constexpr unsigned int Class_3_DAE202C4FFD2C713_TypeDefinitionIndex = 70809;

class Class_3_DAE202C4FFD2C713 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_3; // 0x18
	::Class_3_B537A0AA78803363* Field_3_7; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_3_B537A0AA78803363* Field_3_8; // 0x30
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_5; // 0x38
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_2; // 0x40
	::Class_3_B537A0AA78803363* Field_3_9; // 0x48
	::Class_4_AF61EEC11F34483C<::System::String*>* Field_3_6; // 0x50
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x58
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAE202C4FFD2C713__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAE202C4FFD2C713_METHOD_3_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_3_66C5F1268DD8D2FC(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_DAE202C4FFD2C713_METHOD_3_66C5F1268DD8D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_DAE202C4FFD2C713_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAE202C4FFD2C713_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
