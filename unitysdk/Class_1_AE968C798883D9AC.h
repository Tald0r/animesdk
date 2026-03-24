#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Rect.h"

#define CLASS_1_AE968C798883D9AC_METHOD_1_39C14CC2A9A687B1_OFFSET UNITYSDK_OFFSET(0x681CFE0)
#define CLASS_1_AE968C798883D9AC_METHOD_1_616710126FE6F057_OFFSET UNITYSDK_OFFSET(0x681D490)
#define CLASS_1_AE968C798883D9AC_METHOD_1_9488DBFCA16BB671_1_OFFSET UNITYSDK_OFFSET(0x681DF70)
#define CLASS_1_AE968C798883D9AC_METHOD_1_9488DBFCA16BB671_OFFSET UNITYSDK_OFFSET(0x681D8D0)
#define CLASS_1_AE968C798883D9AC_METHOD_1_A44957C4612AA330_OFFSET UNITYSDK_OFFSET(0x681D980)
#define CLASS_1_AE968C798883D9AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x681CFA0)

inline static constexpr unsigned int Class_1_AE968C798883D9AC_TypeDefinitionIndex = 47778;

class Class_1_AE968C798883D9AC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE968C798883D9AC_TypeDefinitionIndex)->GetStaticField(0xBE00);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE968C798883D9AC_TypeDefinitionIndex)->GetStaticField(0xBE04);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC__CCTOR_OFFSET))();
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> Method_1_39C14CC2A9A687B1()
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_39C14CC2A9A687B1_OFFSET))();
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> Method_1_A44957C4612AA330()
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_A44957C4612AA330_OFFSET))();
	}

	static ::UnityEngine::Rect Method_1_9488DBFCA16BB671(::System::Single a1)
	{
		return ((::UnityEngine::Rect(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_9488DBFCA16BB671_OFFSET))(a1);
	}

	static ::UnityEngine::Rect Method_1_9488DBFCA16BB671_1(::System::Single a1)
	{
		return ((::UnityEngine::Rect(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_9488DBFCA16BB671_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_616710126FE6F057(::System::Boolean a1)
	{
		return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_616710126FE6F057_OFFSET))(a1);
	}
};
