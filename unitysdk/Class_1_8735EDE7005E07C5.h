#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0DD6A2EC32BA181A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoSlidingGround; }

#define CLASS_1_8735EDE7005E07C5_METHOD_1_1BE106CE645448CD_OFFSET UNITYSDK_OFFSET(0x99CF530)
#define CLASS_1_8735EDE7005E07C5_METHOD_1_285470A176927611_OFFSET UNITYSDK_OFFSET(0x99CF240)
#define CLASS_1_8735EDE7005E07C5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x99CF3B0)
#define CLASS_1_8735EDE7005E07C5_METHOD_1_63E8F19CFED33AB3_OFFSET UNITYSDK_OFFSET(0x99CF440)
#define CLASS_1_8735EDE7005E07C5_METHOD_1_A1F721339672B4A6_OFFSET UNITYSDK_OFFSET(0x99CF7B0)
#define CLASS_1_8735EDE7005E07C5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99CF720)
#define CLASS_1_8735EDE7005E07C5__CCTOR_OFFSET UNITYSDK_OFFSET(0x99CF110)
#define CLASS_1_8735EDE7005E07C5__CTOR_OFFSET UNITYSDK_OFFSET(0x99CF100)

inline static constexpr unsigned int Class_1_8735EDE7005E07C5_TypeDefinitionIndex = 42336;

class Class_1_8735EDE7005E07C5 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8735EDE7005E07C5_TypeDefinitionIndex)->GetStaticField(0x44D90);
	}
	static ::UnityEngine::LayerMask* StaticGet_Field_1_1()
	{
		return (::UnityEngine::LayerMask*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8735EDE7005E07C5_TypeDefinitionIndex)->GetStaticField(0x117E0);
	}
	// static const ::System::Single Field_1_2; // 0x0
	::MoleMole::MonoSlidingGround* Field_1_6; // 0x10
	::UnityEngine::Vector3 Field_1_4; // 0x18
	::System::Single Field_1_5; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8735EDE7005E07C5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8735EDE7005E07C5__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_285470A176927611(::MoleMole::MonoSlidingGround*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoSlidingGround*&))((::PBYTE)hIl2Cpp + CLASS_1_8735EDE7005E07C5_METHOD_1_285470A176927611_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_63E8F19CFED33AB3(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_8735EDE7005E07C5_METHOD_1_63E8F19CFED33AB3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1BE106CE645448CD(::Struct_2_0DD6A2EC32BA181A& a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0DD6A2EC32BA181A&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_8735EDE7005E07C5_METHOD_1_1BE106CE645448CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8735EDE7005E07C5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_A1F721339672B4A6(::UnityEngine::Vector3 a1, ::System::Single a2, ::Struct_2_0DD6A2EC32BA181A& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Struct_2_0DD6A2EC32BA181A&))((::PBYTE)hIl2Cpp + CLASS_1_8735EDE7005E07C5_METHOD_1_A1F721339672B4A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8735EDE7005E07C5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
