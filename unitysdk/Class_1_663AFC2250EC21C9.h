#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_663AFC2250EC21C9_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x75376A0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_20E9ED77B87BE404_OFFSET UNITYSDK_OFFSET(0x7538220)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_2D533DD2C7E92FB8_OFFSET UNITYSDK_OFFSET(0x7538350)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x7537B10)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_5191FD5DEE8127E6_OFFSET UNITYSDK_OFFSET(0x7537F90)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_59343D742BA08444_OFFSET UNITYSDK_OFFSET(0x7537EC0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_73212BE283E8719D_OFFSET UNITYSDK_OFFSET(0x7537A20)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_7A2FEB79E771260C_OFFSET UNITYSDK_OFFSET(0x75378F0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_AEEAC3E3FC92548B_OFFSET UNITYSDK_OFFSET(0x75377C0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_B793DFE2B3595557_OFFSET UNITYSDK_OFFSET(0x7538450)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_B931DB9EE891755B_OFFSET UNITYSDK_OFFSET(0x7537CD0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x7537C40)
#define CLASS_1_663AFC2250EC21C9__CTOR_OFFSET UNITYSDK_OFFSET(0x75377B0)

inline static constexpr unsigned int Class_1_663AFC2250EC21C9_TypeDefinitionIndex = 39525;

class Class_1_663AFC2250EC21C9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_AEEAC3E3FC92548B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_AEEAC3E3FC92548B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7A2FEB79E771260C(::System::String* a1, ::System::Double& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_7A2FEB79E771260C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_73212BE283E8719D(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_73212BE283E8719D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Boolean Method_1_B931DB9EE891755B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_B931DB9EE891755B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_59343D742BA08444(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_59343D742BA08444_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5191FD5DEE8127E6(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_5191FD5DEE8127E6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_20E9ED77B87BE404(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_20E9ED77B87BE404_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2D533DD2C7E92FB8(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_2D533DD2C7E92FB8_OFFSET))(this, a1);
	}

	::Class_1_663AFC2250EC21C9* Method_1_B793DFE2B3595557()
	{
		return ((::Class_1_663AFC2250EC21C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_B793DFE2B3595557_OFFSET))(this);
	}
};
