#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_150F5BBE8811E7C4_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x88FF320)
#define CLASS_3_150F5BBE8811E7C4_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x88FF780)
#define CLASS_3_150F5BBE8811E7C4_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x88FFAD0)
#define CLASS_3_150F5BBE8811E7C4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x88FFA70)
#define CLASS_3_150F5BBE8811E7C4_METHOD_3_D038EA8E86EC5AE1_OFFSET UNITYSDK_OFFSET(0x88FFB40)
#define CLASS_3_150F5BBE8811E7C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x88FFA30)
#define CLASS_3_150F5BBE8811E7C4__CTOR_OFFSET UNITYSDK_OFFSET(0x88FFA10)

inline static constexpr unsigned int Class_3_150F5BBE8811E7C4_TypeDefinitionIndex = 37926;

class Class_3_150F5BBE8811E7C4 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_150F5BBE8811E7C4_TypeDefinitionIndex)->GetStaticField(0xD620);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_D038EA8E86EC5AE1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4_METHOD_3_D038EA8E86EC5AE1_OFFSET))(this, a1);
	}
};
