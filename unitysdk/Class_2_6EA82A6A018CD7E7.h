#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UITwoDMapElement_Data_HollowEffect; }
namespace UnityEngine { class Material; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_6EA82A6A018CD7E7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAFC39D0)
#define CLASS_2_6EA82A6A018CD7E7_METHOD_2_AFD78A30A5938472_OFFSET UNITYSDK_OFFSET(0xAFC3B30)
#define CLASS_2_6EA82A6A018CD7E7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAFC3AD0)
#define CLASS_2_6EA82A6A018CD7E7_METHOD_2_FEAD8F4E8B9E3C79_OFFSET UNITYSDK_OFFSET(0xAFC38E0)
#define CLASS_2_6EA82A6A018CD7E7__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC3A80)

inline static constexpr unsigned int Class_2_6EA82A6A018CD7E7_TypeDefinitionIndex = 59235;

class Class_2_6EA82A6A018CD7E7 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UITwoDMapElement_Data_HollowEffect*>* Field_2_0; // 0x50
	::UnityEngine::Material* Field_2_2; // 0x58
	::UnityEngine::Material* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA82A6A018CD7E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FEAD8F4E8B9E3C79(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_6EA82A6A018CD7E7_METHOD_2_FEAD8F4E8B9E3C79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA82A6A018CD7E7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA82A6A018CD7E7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AFD78A30A5938472(::MoleMole::UITwoDMapElement_Data_HollowEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data_HollowEffect*))((::PBYTE)hIl2Cpp + CLASS_2_6EA82A6A018CD7E7_METHOD_2_AFD78A30A5938472_OFFSET))(this, a1);
	}
};
