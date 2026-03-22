#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_22FE7B3FF5958EFB.h"
#include "unitysdk/Struct_2_4495C6EC85BB961A.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_430;

#define CLASS_1_23EBDC5122A5FB12_METHOD_1_349A761E54610EF9_OFFSET UNITYSDK_OFFSET(0x80C6B00)
#define CLASS_1_23EBDC5122A5FB12_METHOD_1_51DE99FD16C92C72_OFFSET UNITYSDK_OFFSET(0x80C61A0)
#define CLASS_1_23EBDC5122A5FB12_METHOD_1_871C52F2DA3F7984_OFFSET UNITYSDK_OFFSET(0x80C6800)
#define CLASS_1_23EBDC5122A5FB12_METHOD_1_C6126E3B5F0ADE27_OFFSET UNITYSDK_OFFSET(0x80C6520)
#define CLASS_1_23EBDC5122A5FB12_METHOD_1_E76D524A22437331_OFFSET UNITYSDK_OFFSET(0x80C6280)

inline static constexpr unsigned int Class_1_23EBDC5122A5FB12_TypeDefinitionIndex = 74679;

class Class_1_23EBDC5122A5FB12 : public ::System::Object
{
public:
	static ::Struct_2_22FE7B3FF5958EFB Method_1_51DE99FD16C92C72(::MoleMole::EntityHandle& a1, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*& a2)
	{
		return ((::Struct_2_22FE7B3FF5958EFB(*)(::MoleMole::EntityHandle&, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_51DE99FD16C92C72_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_C6126E3B5F0ADE27(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Transform*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_C6126E3B5F0ADE27_OFFSET))(a1);
	}

	static ::Struct_2_22FE7B3FF5958EFB Method_1_E76D524A22437331(::MoleMole::EntityHandle& a1, ::UnityEngine::Transform* a2)
	{
		return ((::Struct_2_22FE7B3FF5958EFB(*)(::MoleMole::EntityHandle&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_E76D524A22437331_OFFSET))(a1, a2);
	}

	static ::Struct_2_22FE7B3FF5958EFB Method_1_871C52F2DA3F7984(::MoleMole::EntityHandle& a1, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*& a2)
	{
		return ((::Struct_2_22FE7B3FF5958EFB(*)(::MoleMole::EntityHandle&, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_871C52F2DA3F7984_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_430<::Struct_2_22FE7B3FF5958EFB, ::Struct_2_4495C6EC85BB961A>* Method_1_349A761E54610EF9(::MoleMole::EntityHandle& a1)
	{
		return ((::Class_0_16E4307DCC419505_430<::Struct_2_22FE7B3FF5958EFB, ::Struct_2_4495C6EC85BB961A>*(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_349A761E54610EF9_OFFSET))(a1);
	}
};
