#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1126790C4BD1F190;
class Class_2_208CC9941471731A_434;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F917E6A82EC2580_METHOD_1_84E04E7F500E5788_OFFSET UNITYSDK_OFFSET(0x12CF1F20)
#define CLASS_1_4F917E6A82EC2580_METHOD_1_96175D6DCB6FF2B9_OFFSET UNITYSDK_OFFSET(0x12CF1FF0)
#define CLASS_1_4F917E6A82EC2580_METHOD_1_C4C8D8CD17BA1992_OFFSET UNITYSDK_OFFSET(0x12CF2660)
#define CLASS_1_4F917E6A82EC2580_METHOD_1_DC2CCEA1A7E9DE76_OFFSET UNITYSDK_OFFSET(0x12CF25A0)
#define CLASS_1_4F917E6A82EC2580_METHOD_1_F9E939D4E9AAE0E2_OFFSET UNITYSDK_OFFSET(0x12CF23E0)
#define CLASS_1_4F917E6A82EC2580__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF1E90)

inline static constexpr unsigned int Class_1_4F917E6A82EC2580_TypeDefinitionIndex = 11737;

class Class_1_4F917E6A82EC2580 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_434*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_434*>* Method_1_84E04E7F500E5788(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_434*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_434*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_434*>*))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_84E04E7F500E5788_OFFSET))(this, a1);
	}

	::System::Void Method_1_96175D6DCB6FF2B9(::Class_1_1126790C4BD1F190* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1126790C4BD1F190*))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_96175D6DCB6FF2B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DC2CCEA1A7E9DE76(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_434*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_434*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_DC2CCEA1A7E9DE76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F9E939D4E9AAE0E2(::Class_2_208CC9941471731A_434* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_434*))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_F9E939D4E9AAE0E2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C4C8D8CD17BA1992(::Class_2_208CC9941471731A_434* a1, ::Class_2_208CC9941471731A_434* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_434*, ::Class_2_208CC9941471731A_434*))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_C4C8D8CD17BA1992_OFFSET))(this, a1, a2);
	}
};
