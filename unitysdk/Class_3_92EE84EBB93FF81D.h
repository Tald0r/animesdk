#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_B036D6550F74A038;
namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_92EE84EBB93FF81D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xC4DE5C0)
#define CLASS_3_92EE84EBB93FF81D_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0xC4DE7A0)
#define CLASS_3_92EE84EBB93FF81D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xC4DE740)
#define CLASS_3_92EE84EBB93FF81D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xC4DE4F0)
#define CLASS_3_92EE84EBB93FF81D__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4DE620)
#define CLASS_3_92EE84EBB93FF81D__CTOR_OFFSET UNITYSDK_OFFSET(0xC4DE6A0)

inline static constexpr unsigned int Class_3_92EE84EBB93FF81D_TypeDefinitionIndex = 78131;

class Class_3_92EE84EBB93FF81D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0x38; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B036D6550F74A038*>* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* Field_3_2; // 0x50
	::System::Action_3<::System::Int32, ::System::Int32, ::System::UInt32>* Field_3_3; // 0x58
	::System::Int32 Field_3_0; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_92EE84EBB93FF81D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92EE84EBB93FF81D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92EE84EBB93FF81D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92EE84EBB93FF81D_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92EE84EBB93FF81D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_92EE84EBB93FF81D* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_92EE84EBB93FF81D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_92EE84EBB93FF81D_METHOD_3_792AB6C2A2B589B3_OFFSET))();
	}
};
