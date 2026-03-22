#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_208CC9941471731A_962_Enum_3_F581B404422FC8CC.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_135513887C8D0755.h"

class Class_0_16E4307DCC419505_173;
class Class_1_449B1BB2E3AA2D13;
class Class_2_208CC9941471731A_963;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A0983634461BCFA1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x8011670)
#define CLASS_3_A0983634461BCFA1_METHOD_3_4ECDFE53EE41D31A_OFFSET UNITYSDK_OFFSET(0x8011AF0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_77911CCFAC6246A2_OFFSET UNITYSDK_OFFSET(0x80119B0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0x8012040)
#define CLASS_3_A0983634461BCFA1_METHOD_3_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x80118A0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_899FC90831FCF589_OFFSET UNITYSDK_OFFSET(0x8011B80)
#define CLASS_3_A0983634461BCFA1_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8011CA0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8011A90)
#define CLASS_3_A0983634461BCFA1_METHOD_3_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x8011820)
#define CLASS_3_A0983634461BCFA1_METHOD_3_FB0F645BDB222E95_OFFSET UNITYSDK_OFFSET(0x8011D30)
#define CLASS_3_A0983634461BCFA1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x8011580)
#define CLASS_3_A0983634461BCFA1__CCTOR_OFFSET UNITYSDK_OFFSET(0x80116D0)
#define CLASS_3_A0983634461BCFA1__CTOR_OFFSET UNITYSDK_OFFSET(0x8011750)

inline static constexpr unsigned int Class_3_A0983634461BCFA1_TypeDefinitionIndex = 37541;

class Class_3_A0983634461BCFA1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xB9; // 0x0
	::Class_1_449B1BB2E3AA2D13* Field_3_3; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_1; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_135513887C8D0755>* Field_3_2; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Void Method_3_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Void Method_3_77911CCFAC6246A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_77911CCFAC6246A2_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_135513887C8D0755>* Method_3_4ECDFE53EE41D31A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_135513887C8D0755>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_4ECDFE53EE41D31A_OFFSET))(this);
	}

	::System::UInt32 Method_3_899FC90831FCF589(::System::Int32 a1, ::Class_0_16E4307DCC419505_173* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_173*))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_899FC90831FCF589_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_3_FB0F645BDB222E95(::Class_2_208CC9941471731A_962_Enum_3_F581B404422FC8CC a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_963*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_962_Enum_3_F581B404422FC8CC, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_963*>*&))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_FB0F645BDB222E95_OFFSET))(this, a1, a2);
	}

	static ::Class_3_A0983634461BCFA1* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_A0983634461BCFA1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_792AB6C2A2B589B3_OFFSET))();
	}
};
