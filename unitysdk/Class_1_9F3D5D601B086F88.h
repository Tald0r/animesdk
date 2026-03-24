#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_202;
class Class_1_168DAECE7447D5DB;
class Class_2_208CC9941471731A_168;
class Class_2_208CC9941471731A_415;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9F3D5D601B086F88_METHOD_1_42DB5D19EEAC74D5_OFFSET UNITYSDK_OFFSET(0x61F8270)
#define CLASS_1_9F3D5D601B086F88_METHOD_1_5F2EF3795625C3B4_OFFSET UNITYSDK_OFFSET(0x61F85A0)
#define CLASS_1_9F3D5D601B086F88_METHOD_1_FE46CFDD5AFA32C9_OFFSET UNITYSDK_OFFSET(0x61F8530)
#define CLASS_1_9F3D5D601B086F88__CTOR_OFFSET UNITYSDK_OFFSET(0x61F80C0)

inline static constexpr unsigned int Class_1_9F3D5D601B086F88_TypeDefinitionIndex = 68066;

class Class_1_9F3D5D601B086F88 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_10; // 0x10
	::Class_2_208CC9941471731A_415* Field_1_9; // 0x20
	::Class_1_168DAECE7447D5DB* Field_1_1; // 0x28
	::Class_2_208CC9941471731A_168* Field_1_11; // 0x30
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_202*>* Field_1_4; // 0x38
	::System::Int32 Field_1_3; // 0x40
	::System::Int32 Field_1_6; // 0x44
	::System::Boolean Field_1_0; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::System::Int32 Field_1_5; // 0x4C
	::UnityEngine::Vector2 Field_1_7; // 0x50
	::System::Int32 Field_1_2; // 0x58

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F3D5D601B086F88__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42DB5D19EEAC74D5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F3D5D601B086F88_METHOD_1_42DB5D19EEAC74D5_OFFSET))(this);
	}

	::System::Int32 Method_1_FE46CFDD5AFA32C9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F3D5D601B086F88_METHOD_1_FE46CFDD5AFA32C9_OFFSET))(this);
	}

	::System::String* Method_1_5F2EF3795625C3B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F3D5D601B086F88_METHOD_1_5F2EF3795625C3B4_OFFSET))(this);
	}
};
