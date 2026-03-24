#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9DFB39885391F41D.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_10DFC158AF541A7C_METHOD_1_186354123FEAC459_OFFSET UNITYSDK_OFFSET(0x8101EB0)
#define CLASS_1_10DFC158AF541A7C_METHOD_1_317062801805AE8B_OFFSET UNITYSDK_OFFSET(0x81020F0)
#define CLASS_1_10DFC158AF541A7C_METHOD_1_34B4AA81659C7357_OFFSET UNITYSDK_OFFSET(0x8101F80)
#define CLASS_1_10DFC158AF541A7C_METHOD_1_58D4EFCB8C56AB12_OFFSET UNITYSDK_OFFSET(0x8101960)
#define CLASS_1_10DFC158AF541A7C_METHOD_1_FBD5292E2FA92F45_OFFSET UNITYSDK_OFFSET(0x81014D0)

inline static constexpr unsigned int Class_1_10DFC158AF541A7C_TypeDefinitionIndex = 76954;

class Class_1_10DFC158AF541A7C : public ::System::Object
{
public:
	static ::Struct_2_9DFB39885391F41D* StaticGet_Field_1_4()
	{
		return (::Struct_2_9DFB39885391F41D*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10DFC158AF541A7C_TypeDefinitionIndex)->GetStaticField(0x362D0);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0

	static ::System::Void Method_1_FBD5292E2FA92F45(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_10DFC158AF541A7C_METHOD_1_FBD5292E2FA92F45_OFFSET))(a1);
	}

	static ::System::Void Method_1_58D4EFCB8C56AB12(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Battle::Entity*>>* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Battle::Entity*>>*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_10DFC158AF541A7C_METHOD_1_58D4EFCB8C56AB12_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_186354123FEAC459(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1, ::MoleMole::Battle::Entity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10DFC158AF541A7C_METHOD_1_186354123FEAC459_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_317062801805AE8B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_10DFC158AF541A7C_METHOD_1_317062801805AE8B_OFFSET))(a1);
	}

	static ::System::Void Method_1_34B4AA81659C7357(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_10DFC158AF541A7C_METHOD_1_34B4AA81659C7357_OFFSET))(a1, a2, a3);
	}
};
