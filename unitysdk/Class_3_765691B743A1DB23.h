#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_E4DCFD174698F990;
class Class_3_5B0D01C92C1E671E_1;
class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_765691B743A1DB23_METHOD_3_3986696E4301EF70_OFFSET UNITYSDK_OFFSET(0xDEA1870)
#define CLASS_3_765691B743A1DB23_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0xDEA0460)
#define CLASS_3_765691B743A1DB23_METHOD_3_A32C34C28EBFFA29_OFFSET UNITYSDK_OFFSET(0xDEA09E0)
#define CLASS_3_765691B743A1DB23_METHOD_3_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0xDEA02F0)
#define CLASS_3_765691B743A1DB23_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDEA19D0)
#define CLASS_3_765691B743A1DB23_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xDEA1A30)
#define CLASS_3_765691B743A1DB23__CTOR_OFFSET UNITYSDK_OFFSET(0xDEA1410)

inline static constexpr unsigned int Class_3_765691B743A1DB23_TypeDefinitionIndex = 71813;

class Class_3_765691B743A1DB23 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_2; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_6; // 0x20
	::Class_3_CF43FA1E89397A1C* Field_3_9; // 0x28
	::Class_3_B537A0AA78803363* Field_3_7; // 0x30
	::Class_3_B537A0AA78803363* Field_3_8; // 0x38
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_1; // 0x40
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_4; // 0x48
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_3; // 0x50
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x58
	::Class_3_B537A0AA78803363* Field_3_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B7E3C3DAFBD8F4B2(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_METHOD_3_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_METHOD_3_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_3_A32C34C28EBFFA29(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_METHOD_3_A32C34C28EBFFA29_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_3986696E4301EF70(::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* a1, ::Class_3_5B0D01C92C1E671E_1* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>*, ::Class_3_5B0D01C92C1E671E_1*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_METHOD_3_3986696E4301EF70_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
