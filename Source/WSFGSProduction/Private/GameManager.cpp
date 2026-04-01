#include "GameManager.h"
// L'inclusion de "InputAction.h" n'est pas nécessaire ici si tu ne l'utilises pas encore.

void UGameManager::SetDifficulty(int difficulty)
{
    _difficultyLevel = difficulty; // On assigne la valeur à la variable du .h
}

void UGameManager::CompareCurrentObject(UUserWidget* Card)
{
    if (Card != nullptr)
    {
        // Exemple : On ajoute la carte à la liste actuelle
        _currentQuestRequest.Add(Card);
    }
}

