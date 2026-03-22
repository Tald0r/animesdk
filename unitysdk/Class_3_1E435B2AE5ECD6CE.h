#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_1E435B2AE5ECD6CE_METHOD_3_433808BA5B6C68F6_OFFSET UNITYSDK_OFFSET(0xBCBEF50)
#define CLASS_3_1E435B2AE5ECD6CE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCBFD40)
#define CLASS_3_1E435B2AE5ECD6CE_METHOD_3_E82718B50EFFCD4F_OFFSET UNITYSDK_OFFSET(0xBCBFC70)
#define CLASS_3_1E435B2AE5ECD6CE_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xBCBEC70)
#define CLASS_3_1E435B2AE5ECD6CE__CTOR_OFFSET UNITYSDK_OFFSET(0xBCBFAD0)

inline static constexpr unsigned int Class_3_1E435B2AE5ECD6CE_TypeDefinitionIndex = 76853;

class Class_3_1E435B2AE5ECD6CE : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x18
	::Class_4_179456445C225AB4<::System::Single>* Field_3_3; // 0x20
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E435B2AE5ECD6CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E435B2AE5ECD6CE_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_433808BA5B6C68F6(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_1E435B2AE5ECD6CE_METHOD_3_433808BA5B6C68F6_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E82718B50EFFCD4F(::Struct_2_FE667B282E242C72 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Struct_2_FE667B282E242C72))((::PBYTE)hIl2Cpp + CLASS_3_1E435B2AE5ECD6CE_METHOD_3_E82718B50EFFCD4F_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E435B2AE5ECD6CE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
