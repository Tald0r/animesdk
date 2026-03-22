#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x5FBDD00)
#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x5FBDAA0)
#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_4E04F0368C455165_OFFSET UNITYSDK_OFFSET(0x5FBDD90)
#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_5BCEE80010A1EE68_OFFSET UNITYSDK_OFFSET(0x5FBE130)
#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x5FBE0D0)
#define CLASS_3_D3BB834EB57DF4A1__CTOR_OFFSET UNITYSDK_OFFSET(0x5FBDF70)

inline static constexpr unsigned int Class_3_D3BB834EB57DF4A1_TypeDefinitionIndex = 61539;

class Class_3_D3BB834EB57DF4A1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x28
	::Class_3_B537A0AA78803363* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_5BCEE80010A1EE68(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_5BCEE80010A1EE68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4E04F0368C455165(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_4E04F0368C455165_OFFSET))(this, a1);
	}
};
