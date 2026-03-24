#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_208CC9941471731A_996_Enum_3_F581B404422FC8CC.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_135513887C8D0755.h"

class Class_0_16E4307DCC419505_502;
class Class_1_449B1BB2E3AA2D13;
class Class_2_208CC9941471731A_997;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A0983634461BCFA1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA77ABF0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_4ECDFE53EE41D31A_OFFSET UNITYSDK_OFFSET(0xA77AFE0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_77911CCFAC6246A2_OFFSET UNITYSDK_OFFSET(0xA77ADA0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0xA77AE80)
#define CLASS_3_A0983634461BCFA1_METHOD_3_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0xA77B1E0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_899FC90831FCF589_OFFSET UNITYSDK_OFFSET(0xA77B600)
#define CLASS_3_A0983634461BCFA1_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA77B150)
#define CLASS_3_A0983634461BCFA1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA77B0F0)
#define CLASS_3_A0983634461BCFA1_METHOD_3_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0xA77B070)
#define CLASS_3_A0983634461BCFA1_METHOD_3_FB0F645BDB222E95_OFFSET UNITYSDK_OFFSET(0xA77B2F0)
#define CLASS_3_A0983634461BCFA1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA77AB00)
#define CLASS_3_A0983634461BCFA1__CCTOR_OFFSET UNITYSDK_OFFSET(0xA77AC50)
#define CLASS_3_A0983634461BCFA1__CTOR_OFFSET UNITYSDK_OFFSET(0xA77ACD0)

inline static constexpr unsigned int Class_3_A0983634461BCFA1_TypeDefinitionIndex = 53985;

class Class_3_A0983634461BCFA1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xBD; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_135513887C8D0755>* Field_3_2; // 0x58
	::Class_1_449B1BB2E3AA2D13* Field_3_3; // 0x60

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

	::System::Void Method_3_77911CCFAC6246A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_77911CCFAC6246A2_OFFSET))(this, a1);
	}

	static ::Class_3_A0983634461BCFA1* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_A0983634461BCFA1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_792AB6C2A2B589B3_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_135513887C8D0755>* Method_3_4ECDFE53EE41D31A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_135513887C8D0755>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_4ECDFE53EE41D31A_OFFSET))(this);
	}

	::System::Boolean Method_3_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_FB0F645BDB222E95(::Class_2_208CC9941471731A_996_Enum_3_F581B404422FC8CC a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_997*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_996_Enum_3_F581B404422FC8CC, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_997*>*&))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_FB0F645BDB222E95_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_3_899FC90831FCF589(::System::Int32 a1, ::Class_0_16E4307DCC419505_502* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_502*))((::PBYTE)hIl2Cpp + CLASS_3_A0983634461BCFA1_METHOD_3_899FC90831FCF589_OFFSET))(this, a1, a2);
	}
};
