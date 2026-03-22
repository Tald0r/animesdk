#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_663AFC2250EC21C9_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x88EE560)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_20E9ED77B87BE404_OFFSET UNITYSDK_OFFSET(0x88EF270)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_2D533DD2C7E92FB8_OFFSET UNITYSDK_OFFSET(0x88EF3A0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x88EF4A0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_5191FD5DEE8127E6_OFFSET UNITYSDK_OFFSET(0x88EE680)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_59343D742BA08444_OFFSET UNITYSDK_OFFSET(0x88EF1A0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_73212BE283E8719D_OFFSET UNITYSDK_OFFSET(0x88EF0B0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_7A2FEB79E771260C_OFFSET UNITYSDK_OFFSET(0x88EE910)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_AEEAC3E3FC92548B_OFFSET UNITYSDK_OFFSET(0x88EEA40)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_B793DFE2B3595557_OFFSET UNITYSDK_OFFSET(0x88EEC00)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_B931DB9EE891755B_OFFSET UNITYSDK_OFFSET(0x88EEEC0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x88EEB70)
#define CLASS_1_663AFC2250EC21C9__CTOR_OFFSET UNITYSDK_OFFSET(0x88EE670)

inline static constexpr unsigned int Class_1_663AFC2250EC21C9_TypeDefinitionIndex = 47933;

class Class_1_663AFC2250EC21C9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_5191FD5DEE8127E6(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_5191FD5DEE8127E6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7A2FEB79E771260C(::System::String* a1, ::System::Double& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_7A2FEB79E771260C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AEEAC3E3FC92548B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_AEEAC3E3FC92548B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::Class_1_663AFC2250EC21C9* Method_1_B793DFE2B3595557()
	{
		return ((::Class_1_663AFC2250EC21C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_B793DFE2B3595557_OFFSET))(this);
	}

	::System::Boolean Method_1_B931DB9EE891755B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_B931DB9EE891755B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_73212BE283E8719D(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_73212BE283E8719D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_59343D742BA08444(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_59343D742BA08444_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_20E9ED77B87BE404(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_20E9ED77B87BE404_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2D533DD2C7E92FB8(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_2D533DD2C7E92FB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
