#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6B26016D9623887;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_6DD60321A41B0521_METHOD_1_1E713CEF94D57028_OFFSET UNITYSDK_OFFSET(0x6FFDA40)
#define CLASS_1_6DD60321A41B0521_METHOD_1_AA2378C4CD6F8D6B_OFFSET UNITYSDK_OFFSET(0x6FFD730)
#define CLASS_1_6DD60321A41B0521_METHOD_1_C09C23A5C309C3B2_OFFSET UNITYSDK_OFFSET(0x6FFDF40)
#define CLASS_1_6DD60321A41B0521_METHOD_1_E71198E71DFD526A_OFFSET UNITYSDK_OFFSET(0x6FFDD60)
#define CLASS_1_6DD60321A41B0521__CCTOR_OFFSET UNITYSDK_OFFSET(0x6FFD690)
#define CLASS_1_6DD60321A41B0521__CTOR_OFFSET UNITYSDK_OFFSET(0x6FFD680)

inline static constexpr unsigned int Class_1_6DD60321A41B0521_TypeDefinitionIndex = 80956;

class Class_1_6DD60321A41B0521 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Class_1_A6B26016D9623887*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Class_1_A6B26016D9623887*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DD60321A41B0521_TypeDefinitionIndex)->GetStaticField(0x45640);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DD60321A41B0521__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DD60321A41B0521__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AA2378C4CD6F8D6B(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_6DD60321A41B0521_METHOD_1_AA2378C4CD6F8D6B_OFFSET))(a1);
	}

	static ::System::Void Method_1_1E713CEF94D57028(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_6DD60321A41B0521_METHOD_1_1E713CEF94D57028_OFFSET))(a1);
	}

	static ::System::Void Method_1_E71198E71DFD526A(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_6DD60321A41B0521_METHOD_1_E71198E71DFD526A_OFFSET))(a1);
	}

	static ::System::Void Method_1_C09C23A5C309C3B2(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_6DD60321A41B0521_METHOD_1_C09C23A5C309C3B2_OFFSET))(a1);
	}
};
