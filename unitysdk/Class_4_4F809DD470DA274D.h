#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_0E846B689DE3EFD2;
class Class_3_B537A0AA78803363;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_4F809DD470DA274D_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xFADBD40)
#define CLASS_4_4F809DD470DA274D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xFADCA30)
#define CLASS_4_4F809DD470DA274D_METHOD_4_26890294175BB20B_OFFSET UNITYSDK_OFFSET(0xFADC860)
#define CLASS_4_4F809DD470DA274D_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0xFADC0C0)
#define CLASS_4_4F809DD470DA274D_METHOD_4_83AC15C9B4E11579_OFFSET UNITYSDK_OFFSET(0xFADC500)
#define CLASS_4_4F809DD470DA274D_METHOD_4_A08DEEEE1A01931E_OFFSET UNITYSDK_OFFSET(0xFADC150)
#define CLASS_4_4F809DD470DA274D__CTOR_OFFSET UNITYSDK_OFFSET(0xFADC270)

inline static constexpr unsigned int Class_4_4F809DD470DA274D_TypeDefinitionIndex = 79334;

class Class_4_4F809DD470DA274D : public ::Class_3_F3948D237059FA7A
{
public:
	// static const ::System::String* Field_4_6; // 0x0
	::Class_3_B537A0AA78803363* Field_4_5; // 0x28
	::Class_3_B537A0AA78803363* Field_4_4; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x38
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_2; // 0x40
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* Field_4_3; // 0x48
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_83AC15C9B4E11579(::Class_1_0E846B689DE3EFD2* a1, ::Struct_2_FE667B282E242C72& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E846B689DE3EFD2*, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_83AC15C9B4E11579_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_A08DEEEE1A01931E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_A08DEEEE1A01931E_OFFSET))(this, a1);
	}

	::Class_1_0E846B689DE3EFD2* Method_4_26890294175BB20B(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::Class_1_0E846B689DE3EFD2*(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_26890294175BB20B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
