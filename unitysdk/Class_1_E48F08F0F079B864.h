#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/PieceColorModifyRequest.h"
#include "unitysdk/Struct_2_1480BFA419A4783B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define CLASS_1_E48F08F0F079B864_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA0E4DE0)
#define CLASS_1_E48F08F0F079B864_METHOD_1_D1449D1CBE677811_OFFSET UNITYSDK_OFFSET(0xA0E4AA0)
#define CLASS_1_E48F08F0F079B864_METHOD_1_DB4ABE956B91BF5E_OFFSET UNITYSDK_OFFSET(0xA0E4780)
#define CLASS_1_E48F08F0F079B864__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E4720)

inline static constexpr unsigned int Class_1_E48F08F0F079B864_TypeDefinitionIndex = 76829;

class Class_1_E48F08F0F079B864 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::PieceColorModifyRequest Field_1_1; // 0x10
	::Struct_2_1480BFA419A4783B Field_1_0; // 0x80
	::System::Single Field_1_2; // 0x90

	::System::Void _ctor(::MoleMole::HollowChessboard::PieceColorModifyRequest& a1, ::Struct_2_1480BFA419A4783B a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::PieceColorModifyRequest&, ::Struct_2_1480BFA419A4783B))((::PBYTE)hIl2Cpp + CLASS_1_E48F08F0F079B864__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::UnityEngine::Color> Method_1_DB4ABE956B91BF5E()
	{
		return ((::System::Nullable_1<::UnityEngine::Color>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E48F08F0F079B864_METHOD_1_DB4ABE956B91BF5E_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector4> Method_1_D1449D1CBE677811()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector4>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E48F08F0F079B864_METHOD_1_D1449D1CBE677811_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E48F08F0F079B864_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
